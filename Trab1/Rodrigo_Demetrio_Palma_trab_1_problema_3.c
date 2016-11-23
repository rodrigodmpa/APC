#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a0,a1,a2,a3,a4,a5;
    double x0,x1,x1o,fx0,e,A,fA;
    double L0=1,L1=0,divide_intervalo,comp;
    int n = 1;

    printf("Insira o valor do coeficiente de grau 5:\n");
    scanf("%lf",&a5);
    printf("Insira o valor do coeficiente de grau 4:\n");
    scanf("%lf",&a4);
    printf("Insira o valor do coeficiente de grau 3:\n");
    scanf("%lf",&a3);
    printf("Insira o valor do coeficiente de grau 2:\n");
    scanf("%lf",&a2);
    printf("Insira o valor do coeficiente de grau 1:\n");
    scanf("%lf",&a1);
    printf("Insira o valor do coeficiente de grau 0:\n");
    scanf("%lf",&a0);
    printf("Insira o primeiro numero do intervalo (x0):\n");
    scanf("%lf",&x0);
    printf("Insira o segundo numero do intervalo (x1):\n");
    scanf("%lf",&x1);
    printf("Insira a precisao necessaria:\n");
    scanf("%lf",&e);
    printf("O intervalo eh (%.2lf,%.2lf)\n",x0,x1);

    // Se o usuário entrar com um x0 maior que o x1, troca um com o outro.
    if (x0>x1)
    {
        x1o = x1;
        x1 = x0;
        x0 = x1o;

    }

    while(fabs(L1-L0)>e){
    //Enquanto o comprimento anterior (L0) menos o comprimento atual (L1) for maior que a precisão (e) faça:

    L0 = L1; //Comprimento anterior recebe o comprimento atual.
    L1 = 0;  //Comprimento atual zera.
    divide_intervalo = (x1-x0)/n; //Divide o intervalo em n pedaços.
    n++; //Aumenta a quantidade de pedaços de intervalo.
    fx0 = a5*pow(x0,5) + a4*pow(x0,4) + a3*pow(x0,3) + a2*pow(x0,2) + a1*pow(x0,1) + a0;

    for(A = x0 + divide_intervalo;A <= x1;A = A + divide_intervalo); {
    //De x0 + um pedaço do intervalo até x1 some um pedaço.
    fA = a5*pow(A,5) + a4*pow(A,4) + a3*pow(A,3) + a2*pow(A,2) + a1*pow(A,1) + a0;
    comp = sqrt(pow(divide_intervalo,2) + pow(fA-fx0,2));//Calcula as hipotenusas
    L1 = L1 + comp;// Soma as hipotenusas.
    fx0 = fA;

    }
    }
    printf("F(x) = %.2lfx^5+%.2lfx^4+%.2lfx^3+%.2lfx^2+%.2lfx+%.2lf\n ",a5,a4,a3,a2,a1,a0);
    printf("O comprimento de F(x) no intervalo acima eh:%lf.\n",L1);

return 0;
}
