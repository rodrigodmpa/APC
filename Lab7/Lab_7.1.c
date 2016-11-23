#include<stdio.h>
#include<stdlib.h>

int fneuronio(float *,float *,int, int);

int main(){

float entrada[10],peso[10];
int i,ATIVACAO,T;

for (i=0;i<10;i++){
    printf("Digite um numero para a entrada %d: ", i+1);
    scanf("%f", &entrada[i]);
}
for (i=0;i<10;i++){
    printf("Digite um numero para o peso %d: ", i+1);
    scanf("%f", &peso[i]);
}
printf("Digite o limiar de ativacao:");
scanf("%d", &T);

ATIVACAO = fneuronio(entrada,peso,10,T);

if (ATIVACAO == 0)
    printf("Neuronio inibido!");
else if (ATIVACAO == 1)
    printf("Neuronio ativado!");

return 0;

}


int fneuronio(float *entrada,float *peso,int N,int T){
int i;
float somap = 0;
for(i=0;i<N;i++){
somap = somap + ((*(entrada + i)) * (*(peso + i)));
}
if (somap > T)
    return 1;

else if (somap <= T)
    return 0;

}
