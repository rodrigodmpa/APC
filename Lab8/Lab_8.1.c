#include <stdlib.h>
#include <stdio.h>

int main(){
int *A,*B,*C,N,i,soma_total = 0;


printf("Digite o tamanho dos vetores A e B:\n");
printf("Vetor A e B (de mesmo tamanho):");
scanf("%d", &N);

A = (int *) malloc(N*sizeof (int));
B = (int *) malloc(N*sizeof (int));
C = (int *) malloc(N*sizeof (int));


    if (A == NULL){
		printf("Alocacao falhou. Finalizado.\n");
		exit(1);
		}
    if (B == NULL){
		printf("Alocacao falhou. Finalizado.\n");
		exit(1);
		}
    if (C == NULL){
		printf("Alocacao falhou. Finalizado.\n");
		exit(1);
		}


for(i=0;i<N;i++){
    printf("Digite o valor [%d] do Vetor A:",i);
    scanf("%d", (A+i));
}
for(i=0;i<N;i++){
 printf("Digite o valor [%d] do Vetor B:",i);
    scanf("%d", (B+i));
}

for(i=0;i<N;i++)
   *(C+i) = *(A+i) + *(B+i);

for(i=0;i<N;i++){
    printf("A[%d] + B[%d] = %d + %d = C[%d] = %d\n",i,i,*(A+i),*(B+i),i,*(C+i));
}
 for (i=0; i<N; i++){
        soma_total += *(C+i);
        }
        printf("A soma dos termos de C eh:%d\n",soma_total);
    free(A);free(B);free(C);
system("PAUSE");
return 0;
}
