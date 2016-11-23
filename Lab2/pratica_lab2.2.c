#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float x0,y,y0;
    printf("Digite a coordenada x do ponto:");
    scanf("%f", &x0);
    printf("Digite a coordenada y do ponto:");
    scanf("%f", &y);
    if (x0<=0 || x0>6)
    {
        y0=0;
        if(y0==y)
        {
            printf("Este ponto PERTENCE a curva.");
        }
        else
        {
            printf("Este ponto NAO PERTENCE a curva.");
        }
    }
    if (0<x0 && x0<=3)
    {
        y0=x0/3;
        if (fabs(y0-y)<0.001)
        {
            printf("Este ponto PERTENCE a curva.");
        }
        else
        {
            printf("Este ponto NAO PERTENCE a curva.");
        }

    }
    if (3<x0 && x0<=6)
    {
        y0=(-x0/3)+2;
        if (fabs(y0-y)<0.01)
        {
            printf("Este ponto PERTENCE a curva.");
        }
        else
        {
            printf("Este ponto NAO PERTENCE a curva.");
        }
    }
    return 0;
}
