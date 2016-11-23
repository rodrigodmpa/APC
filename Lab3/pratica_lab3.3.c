#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float x1,x2,xm,fx1,fx2,fxm,a,b,c,d,e;
    printf("Os valores a,b,c,d sao usados somente nas funcoes polinomiais, se \na funcao desejada nao for deste tipo digite qualquer valor para essas letras.\n");
    printf("Digite o valor de a:");
    scanf("%f",&a);
    printf("Digite o valor de b:");
    scanf("%f",&b);
    printf("Digite o valor de c:");
    scanf("%f",&c);
    printf("Digite o valor de d:");
    scanf("%f",&d);
    printf("Digite o valor de x1:");
    scanf("%f",&x1);
    printf("Digite o valor de x2:");
    scanf("%f",&x2);
    printf("Digite o valor de e:");
    scanf("%f",&e);
    while (fabs(x1-x2)>e)
    {

        // Escolha a função desejada. Retire o "//" da frente dela e execute. Para mudar coloque o "//" na antiga e retire o "//" da nova função a ser usada. Observe que para cada função existem
        // três diferentes expressões que serão usadas.

        //**************   fx1  ****************** Excolha:
        fx1 = a*pow(x1,3)+b*pow(x1,2)+c*pow(x1,1)+d;
        //fx1 = x1 + log(x1);
        //fx1 = 5*sin(x1) + x1 - 5;

        //**************   fx2  ****************** Escolha:
        fx2 = a*pow(x2,3)+b*pow(x2,2)+c*pow(x2,1)+d;
        //fx2 = x2 + log(x2);
        //fx2 = 5*sin(x2) + x2 - 5;

        xm = (x1+x2)/2;

        //**************   fxm  ****************** Escolha:
        fxm = a*pow(xm,3)+b*pow(xm,2)+c*pow(xm,1)+d;
        //fxm = xm + log(xm);
        //fxm = 5*sin(xm) + xm - 5;




        if(fx1<fx2)
        {
            if (fxm==0)
            {
                x1=x2;
            }
            else if (fxm>0)

                x2=xm;

            else if(fxm<0)

                x1=xm;
        }
        else
        {
            if (fxm==0)
            {
                x1=x2;
            }
            else if (fxm<0)

                x2=xm;

            else if (fxm>0)
                x1=xm;

        }


    }
    printf("O valor da raiz com precisao %f eh: %f.",e,xm);

    return 0;

}
