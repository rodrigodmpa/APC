#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <playCB/playcb.h>
#include <windows.h>
#define MAX 19

int main()
{
    int matriz[19][19], matriz2[19][19];
    int geoIndex[19][19];
    Ponto p, p2;
    int i, j, t, soma;
    int a,b;



    AbreJanela(600, 600, "Game of Life");
    PintarFundo(255, 255, 255);


        //Cria as divisórias

     for(a = - 95; a < 96; a += 10)
    {
        p.x = a;
        p2.x = a;
        p.y = 95;
        p2.y = -95;
        CriaReta(p, p2);
        Pintar(0, 0, 255);
        Grafite(3);

        p.x = 95;
        p2.x = -95;
        p.y = a;
        p2.y = a;
        CriaReta(p, p2);
        Pintar(0, 0, 255);
        Grafite(3);
    }

        //Cria os quadrados

i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = -94;

    geoIndex[i][0] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }


 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = -84;

    geoIndex[i][1] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }


 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = -74;

    geoIndex[i][2] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }

    i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = -64;

    geoIndex[i][3] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }

 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = -54;

    geoIndex[i][4] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }

 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = -44;

    geoIndex[i][5] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }
 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = -34;

    geoIndex[i][6] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }
 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = -24;

    geoIndex[i][7] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }

 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = -14;

    geoIndex[i][8] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }

 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = -4;

    geoIndex[i][9] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }

 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = 6;

    geoIndex[i][10] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }
 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = 16;

    geoIndex[i][11] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }

 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = 26;

    geoIndex[i][12] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }

 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = 36;

    geoIndex[i][13] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }
 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = 46;

    geoIndex[i][14] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }

 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = 56;

    geoIndex[i][15] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }
 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = 66;

    geoIndex[i][16] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }
 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = 76;

    geoIndex[i][17] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }

 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = 86;

    geoIndex[i][18] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }
 i = 0;

        for(a = -94; a < 91; a += 10)
    {


    p.x = a;
    p.y = 96;

    geoIndex[i][19] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);
i++;

    }

    //Faz a matriz
    for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
    matriz[i][j] = 0;
}
}

matriz[6][2] = matriz[6][3] = matriz[6][4] = matriz[7][4] = 1;
matriz[2][6] = matriz[3][6] = matriz[4][6] = matriz[4][7] = 1;
matriz[7][6] = matriz[8][6] = matriz[8][7] = 1;
matriz[6][7] = matriz[6][8] = matriz[7][8] = 1;

for(i=0;i<9;i++){
for(j=0;j<MAX;j++){
if(matriz[i][j]==1){
    matriz[i][MAX-1-j]=1;
}
}
}
for(i=0;i<MAX;i++){
for(j=0;j<MAX;j++){
if(matriz[i][j]==1){
    matriz[MAX-1-i][j]=1;
}
}
}
for(i=0;i<MAX;i++){
for(j=0;j<MAX;j++){
printf("%d ", matriz[i][j]);
}
printf("\n");
}

//Sleep(1000);
system("cls");
    //Vinte interações
for(t=0;t<20;t++)
    {
for(i=0;i<MAX;i++){
for(j=0;j<MAX;j++){

soma = matriz[i-1][j-1] + matriz[i+1][j+1] + matriz[i-1][j+1] + matriz[i+1][j-1] + matriz[i][j+1] + matriz[i][j-1] + matriz[i+1][j] + matriz[i-1][j];

if(matriz[i][j] == 1){

    if(soma>3 || soma<2)
    matriz2[i][j] = 0;
    if(soma == 2 || soma == 3)
    matriz2[i][j] = 1;
    }
else
    {
    if(soma == 3)
    matriz2[i][j] = 1;
    else
    matriz2[i][j] = 0;
}
}
}
for(i=0;i<MAX;i++){
for(j=0;j<MAX;j++){

matriz[i][j] = matriz2[i][j];
printf("%d ", matriz[i][j]);
}
printf("\n");
}
Sleep(1000);
system("cls");


    // Passa da matriz de numeros para a matriz de Desenho
    for(i = 0; i < 19; i++){
            for(j = 0; j < 19; j++){
                if(matriz[i][j] == 1){
                    Pintar(0, 0, 0, QUADRADO, geoIndex[i][j]);
                }
                else{
                    Pintar(255, 255, 255, QUADRADO, geoIndex[i][j]);
                }
            }
        }



        Desenha1Frame();
        Sleep( 1000 );



}






        Desenha();
    return 0;
        }



