#include<stdio.h>
#include<stdlib.h>
int main() {

char nome[40];
float dist, tempo, vmedia;
printf("Este programa calcula a velocidade media de um motorista \n");
printf("a partir da distancia percorrida e do tempo gasto. \n");

printf("Nome do Piloto:");
scanf("%s", nome);
printf("Distancia percorrida em quilometros:");
scanf("%f", &dist);
printf("Tempo gasto em horas:");
scanf("%f", &tempo);

vmedia = dist/tempo;

printf("A velocidade media de %s foi %f km/h.", nome, vmedia);

system("PAUSE");
return 0;
}
