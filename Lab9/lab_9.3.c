#include <stdio.h>
#include <stdlib.h>

struct header{
char type[2];
unsigned int size;
unsigned int reserved;
unsigned int offset;
unsigned int size_header;
unsigned int width;
unsigned int height;
unsigned short int number_planes;
unsigned short int number_bits;
unsigned int compression;
unsigned int total_size;
unsigned int horizontal_resolution;
unsigned int vertical_resolution;
unsigned int number_palette_colors;
unsigned int important_colors;
};

struct data{
unsigned char cor;
};


int main(int argc ,char *argv[]){

struct header imagem;
struct data *dados;
FILE *fp;
int i;


if (argc!=2) {
printf("Voce esqueceu de digitar o nome do arquivo.\n");
exit(1);
}

fp = fopen(argv[1], "rb");

fread(&imagem.type[0],sizeof(char),1,fp);
fread(&imagem.type[1],sizeof(char),1,fp);
fread(&imagem.size,sizeof(int),1,fp);
fread(&imagem.reserved,sizeof(int),1,fp);
fread(&imagem.offset,sizeof(int),1,fp);
fread(&imagem.size_header,sizeof(int),1,fp);
fread(&imagem.width,sizeof(int),1,fp);
fread(&imagem.height,sizeof(int),1,fp);
fread(&imagem.number_planes,sizeof(short int),1,fp);
fread(&imagem.number_bits,sizeof(short int),1,fp);
fread(&imagem.compression,sizeof(int),1,fp);
fread(&imagem.total_size,sizeof(int),1,fp);
fread(&imagem.horizontal_resolution,sizeof(int),1,fp);
fread(&imagem.vertical_resolution,sizeof(int),1,fp);
fread(&imagem.number_palette_colors,sizeof(int),1,fp);
fread(&imagem.important_colors,sizeof(int),1,fp);

dados = (struct data *) malloc(imagem.total_size*sizeof(dados));

for(i=0;i<imagem.total_size;i++){
fread(&dados[i].cor,sizeof(char),1,fp);
}

printf("Magic Number 1: %c\n",imagem.type[0]);
printf("Magic Number 2: %c\n",imagem.type[1]);
printf("File size: %d\n",imagem.size);
printf("The offset where the bitmap data (pixels) can be found: %d\n",imagem.offset);
printf("The number of bytes in the header: %d\n",imagem.size_header);
printf("The width of the bitmap in pixels: %d\n",imagem.width);
printf("The height of the bitmap in pixels: %d\n",imagem.height);
printf("Number of color planes being used: %d\n",imagem.number_planes);
printf("The number of bits/pixel: %d\n",imagem.number_bits);
printf("Compression: %d\n",imagem.compression);
printf("Data size: %d\n",imagem.total_size);
printf("The horizontal resolution of the image: %d\n",imagem.horizontal_resolution);
printf("The vertical resolution of the imagem: %d\n",imagem.vertical_resolution);
printf("Number of colors in the palette: %d\n", imagem.number_palette_colors);
printf("Important Colors: %d\n", imagem.important_colors);

printf("\n\n");
printf("\tStart of Bitmap Data\n\n");

for(i=0;i<imagem.total_size;i++){
    printf("%d ",dados[i].cor);
}

printf("\n");
fclose(fp);
free(dados);
system("PAUSE");
return 0;
}
