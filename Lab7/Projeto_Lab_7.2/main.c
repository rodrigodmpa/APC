#include <stdio.h>
#include <stdlib.h>
#include "funcoes.c"
#include "funcoes.h"
#define MAX 10


int main(){
int i,APR[MAX],sucesso,NAPR ,NRPR, retorno;
float NOTAS[MAX],PAPR,PRPR;

for(i=0;i<MAX;i++){
    printf("Digite a nota %d:", i+1);
    scanf("%f", &NOTAS[i]);
}

recebe_notas(NOTAS, MAX, APR);


for(i=0;i<MAX;i++){
    printf("Nota %d:%.2f\t", i+1, *(NOTAS + i));
    printf("APR:%d", *(APR + i));
    printf("\n");
}

conta_notas(APR,MAX,&NAPR,&NRPR);

printf("O numero de aprovados eh: %d\n", NAPR);
printf("O numero de reprovados eh: %d\n", NRPR);

retorno = percent_aprov(NAPR,NRPR,&PAPR,&PRPR);

printf("A porcentagem de aprovados eh: %.0f%%\n", PAPR*100);
printf("A porcentagem de reprovados eh: %.0f%%\n", PRPR*100);

if (retorno == 0)
    printf("Mais da metade da turma foi reprovada.\n");

else if(retorno == 1)
    printf("Menos da metade da turma foi reprovada.\n");

system("PAUSE");
return 0;
}
