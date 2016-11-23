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



for(a = -94, i = 0; a < 91,i<19; a += 10, i++){
for(b = -94, j = 0; b < 91,j<19; b+=10, j++){

    p.x = a;
    p.y = b;

    geoIndex[i][j] = CriaQuadrado(8, p) ;
    Pintar(255,255,255);


}
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
Sleep(500);
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
        Sleep( 500 );
}
        Desenha();
    return 0;
        }



