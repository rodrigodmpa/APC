#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int matricula;
float media,P1,P2,P3,T1,T2;
FILE *fp,*fp2;
char Nome_Arquivo[30];

printf("Digite o nome do arquivo onde estao as notas:");
gets(Nome_Arquivo);
fp = fopen(Nome_Arquivo,"r");

fp2=fopen("media.txt", "w");

while(fscanf(fp,"%d %f %f %f %f %f", &matricula, &P1, &P2, &P3, &T1, &T2) == 6) {

media = (((P1*2)+ (P2*3) + (P3*3))/8 +(T1+T2)/2)/2;

fprintf(fp2,"%d ",matricula);
fprintf(fp2,"%.2f ",media);
fprintf(fp2,"\n");
}

fclose(fp);
fclose(fp2);

system("PAUSE");
return 0;
}
