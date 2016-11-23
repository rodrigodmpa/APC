#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 20

int main()
{

    float vetor1[20], Vm[20],Em,soma = 0;
    int i=0,a;

    printf("Digite os 20 valores iniciais:\n");

    for(i=0; i<MAX; i++)
    {
        a = i + 1;
        printf("Valor %d:",a);
        scanf("%f", &vetor1[i]);
    }


    for(i=1; i<MAX-1; i++)
    {
        Vm[i] = ((vetor1[i-1])+vetor1[i]+(vetor1[i+1]))/3;

    }
    Vm[0] = Vm[1];
    Vm[MAX-1] = Vm[MAX-2];

    printf("Os valores medios sao:\n");

    for(i=0; i<MAX; i++)
    {
        printf("Vm(%d) = %f\n",i+1,Vm[i]);
    }
    for(i=0; i<MAX; i++)
    {

        Em = pow((vetor1[i] - Vm[i]),2)/MAX;
        soma = soma + Em;
    }
    printf("O erro medio quadrado dos valores eh: %f.",soma);
    return 0;
}
