#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 10



int main(){
float vetor1[MAX],vetor2[MAX],resultado[MAX*MAX];
int i,j,k,a;
printf("Digite os 10 elementos do PRIMEIRO vetor:");
for(i=0;i<=MAX-1;i++){
    a = i+1;
    printf("\nTermo %d:",a);
    scanf("%f", &vetor1[i]);

}
    printf("Digite os 10 elementos do SEGUNDO vetor:");
for(j=0;j<=MAX-1;j++){
    a = j +1 ;
    printf("\nTermo %d:",a);

    scanf("%f", &vetor2[j]);
}
printf("Os resultados da multiplicacao dos valores do vetor 1 pelo vetor 2 sao:\n");

for(k=0;k<=MAX-1;k++){

        resultado[k] = vetor1[k] * vetor2[k];
        printf("%f\t\n",resultado[k]);
}


return 0;
}
