#include <stdlib.h>
#include <stdio.h>

int main(){
    //Declarações:
int **M1,**M2,**M3;
int L1,C1,L2,C2,valor;
int i,j,k;
//Pede os dados:
printf("Digite o numero de linhas da matriz 1:");
scanf("%d", &L1);
printf("Digite o nuero de colunas da matriz 1:");
scanf("%d", &C1);

printf("Digite o numero de linhas da matriz 2(Deve ser igual ao nrm de colunas da matriz 1):");
scanf("%d", &L2);
printf("Digite o nuero de colunas da matriz 2:");
scanf("%d", &C2);


//Aloca o vetor de ponteiros .
M1 = (int**)malloc(L1*sizeof(int *));
M2 = (int**)malloc(L2*sizeof(int *));
M3 = (int**)malloc(L1*sizeof(int *));


//Para cada ponteiro, aloca-se um outro vetor.
for(i=0;i<L1;i++){
    *(M1+i) = (int*)malloc(C1*sizeof(int));
}

for(i=0;i<L2;i++){
    *(M2+i) = (int*)malloc(C2*sizeof(int));
}

for(i=0;i<L1;i++){
    *(M3+i) = (int*)malloc(C2*sizeof(int));
}


//Preenche a M1.
for(i=0;i<L1;i++){
    for(j=0;j<C1;j++){
    printf("Digite o valor [%d][%d] da matriz 1:", i,j);
    scanf("%d", *(M1+i)+j);
}
}
//Preenche a M2.
for(i=0;i<L2;i++){
    for(j=0;j<C2;j++){
    printf("Digite o valor [%d][%d] da matriz 2:", i,j);
    scanf("%d", *(M2+i)+j);
}
}

//Matriz 1 x Matriz 2 = Matriz 3.
for(i=0;i<L1;i++){
    for(j=0;j<C2;j++){
    valor = 0;
    for(k=0;k<C1;k++)
        valor = valor + *(*(M1+i)+k) * *(*(M2+k)+j);
        *(*(M3+i)+j) = valor;
    }
}

//Escreve na tela a matriz 1.
printf("\n");
printf("Matriz 1:\n");
for (i=0;i<L1;i++){
    for(j=0;j<C1;j++){
        printf("%d\t",*(*(M1+i)+j));
}
    printf("\n");
}
//Escreve na tela a matriz 2.
printf("\n\n");
printf("Matriz 2:\n");
for (i=0;i<L2;i++){
for(j=0;j<C2;j++){
printf("%d\t",*(*(M2+i)+j));
}
printf("\n");
}
//Escreve na tela a matriz 3.
printf("\n\n");
printf("Matriz 3:\n");
for (i=0; i<L1; i++){
for (j=0; j<C2;j++) {
printf("%d\t", *(*(M3+i)+j));
}
printf("\n");
}

//Libera a memória que foi alocada.
for (i=0;i<L1;i++)
free(*(M1+i));

free(M1);

for (i=0;i<L2;i++)
free(*(M2+i));

free(M2);

for (i=0;i<L1;i++)
free(*(M3+i));

free(M3);


system("PAUSE");
return 0;
}
