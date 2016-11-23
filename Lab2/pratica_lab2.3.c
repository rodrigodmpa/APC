#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a,b,c;
    printf("Digite o valor do primeiro lado:");
    scanf("%f", &a);
    printf("Digite o valor do segundo lado:");
    scanf("%f", &b);
    printf("Digite o valor do terceiro lado:");
    scanf("%f", &c);

    if (a+b>c && a+c>b && b+c>a)
    {
        printf("Este triangulo existe.\n");
        if (a==b && a==c)
        {
            printf("Este triangulo eh equilatero.");
        }
        else if ((a==b && a!=c) || (a==c && b!=c) || (b==c && a!=c))
        {
            printf("Este triangulo eh isosceles.");
        }
        else
        {
            printf("Este triangulo eh escaleno.");
        }
    }
    else
    {
        printf("Triangulo invalido.\n");

    }

    return 0;
}


