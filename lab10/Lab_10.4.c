#include <stdlib.h>
#include <stdio.h>

void bubblesort(float *, int);

int main ()
{
    int i, count = 1;
    float *vetor = 0, *maisvetor = 0;
    float x, mediana;

    do
    {
        printf ("Digite o valor do %do termo do vetor:\n", count);
        scanf ("%f", &x);
        maisvetor = realloc (vetor, sizeof (float) * count);
        vetor = maisvetor;
        if (x != 11){
        vetor[count-1] = x;
        count++;
        }
    }
    while (x != 11);

    bubblesort(vetor, count);

    if (count % 2 == 0)
        mediana = vetor[count/2 -1];
    else
        mediana = (vetor[count/2-1] + vetor[count/2])/2;

    printf ("A mediana eh %.2f\n", mediana);

    free (vetor);
    return 0;
}

void bubblesort (float *vetor,int count)
{
    int i, j;
    float temp;
    for (j = 0; j != count; j++)
    {
        for (i = 0; i < count-2; i++)
        {
            if (vetor[i] > vetor[i+1])
            {
                temp = vetor[i];
                vetor [i] = vetor[i+1];
                vetor [i+1] = temp;
            }
        }
    }
}
