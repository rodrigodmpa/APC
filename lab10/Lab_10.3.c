#include <stdio.h>
#include <stdlib.h>

int PesquisaBinaria(int, int *, int, int);

int main()
{
    int N, *v, i, x, result;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &N);

    v = (int *) malloc(N*sizeof(int));

    for(i = 0; i < N; i++)
    {
        printf("Digite um elemento: ");
        scanf("%d", (v+i));
    }
    printf("Digite o elemento a ser encontrado: ");
    scanf("%d", &x);

    result = PesquisaBinaria(x, v, 0, N);

    if (result != -1)
    {
        printf("O elemento %d esta na posicao %d do vetor.\n",x, result);
    }
    else
    {
        printf("O elemento %d nao foi encontrado.\n",x);
    }

    free(v);

    system("PAUSE");
    return 0;
}

int PesquisaBinaria (int x, int *v, int inicio, int fim)
{
    int i = (int) (inicio + fim)/2;

    if (v[i] == x)
    {
        return i+1;
    }
    else if (inicio == fim)
    {
        return -1;
    }
    else if (v[i] < x)
    {
        PesquisaBinaria(x, v, i+1, fim);
    }
    else
    {
        PesquisaBinaria(x, v, inicio, i-1);
    }
}
