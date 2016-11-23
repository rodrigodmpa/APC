#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159265


int main()
{

    double Z_1_1,Z_1_2,Z_2_1,Z_2_2,Z1mod,Z2mod,Z1arg,Z2arg,resultado_modulo,resultado_arg,resultado_cartesianoX,resultado_cartesianoY,cart1x,cart1y,cart2x,cart2y;
    char FE,FS,codigo;

    printf("Entre com o formato de entrada (C)artesiano ou (E)xponencial:");
    scanf("%c", &FE);
    getchar();


    if (FE == 'C')
    {
        printf("Digite a parte real de Z1:\n");
        scanf("%lf", &Z_1_1);
        printf("Digite a parte imaginaria de Z1:\n");
        scanf("%lf", &Z_1_2);
        printf("Digite a parte real de Z2:\n");
        scanf("%lf", &Z_2_1);
        printf("Digite a imaginaria real de Z2:\n");
        scanf("%lf", &Z_2_2);

        system("cls");


        printf("Z1 = %.2lf + %.2lfi\n",Z_1_1,Z_1_2);
        printf("Z2 = %.2lf + %.2lfi\n\n\n",Z_2_1,Z_2_2);

        Z1mod = sqrt(pow(Z_1_1,2) + pow(Z_1_2,2));
        Z2mod = sqrt(pow(Z_2_1,2) + pow(Z_2_2,2));
        Z1arg = atan(Z_1_2/Z_1_1)*180/pi ;
        Z2arg = atan(Z_2_2/Z_2_1)*180/pi ;
    }

    else if (FE == 'E')
    {
        printf("Digite o modulo de Z1:\n");
        scanf("%lf", &Z_1_1);
        printf("Digite a fase em radianos de Z1:\n");
        scanf("%lf", &Z_1_2);
        printf("Digite o modulo de Z2:\n");
        scanf("%lf", &Z_2_1);
        printf("Digite a fase em radianos de Z2:\n");
        scanf("%lf", &Z_2_2);

        system("cls");

        printf("Z1 = %.2lf * e^%.2lfi\n",Z_1_1,Z_1_2);
        printf("Z2 = %.2lf * e^%.2lfi\n",Z_2_1,Z_2_2);

        cart1x = Z_1_1*cos(Z_1_2);
        cart1y = Z_1_1*sin(Z_1_2);
        cart2x = Z_2_1*cos(Z_2_2);
        cart2y = Z_2_1*sin(Z_2_2);

        Z1mod  = Z_1_1;
        Z2mod  = Z_2_1;
        Z1arg  = Z_1_2*180/pi;
        Z2arg  = Z_2_2*180/pi;
    }
    switch(FE)
    {
    case 'C' :
        do
        {

            getchar();
            printf("**********MENU DE OPERACOES********\n");
            printf("(M) - Multiplicacao\n");
            printf("(D) - Divisao\n");
            printf("(E) - Converte Exponencial\n");
            printf("(C) - Converte Cartesiano\n");
            printf("(Z) - Para fechar o programa\n");
            printf("***********************************\n");
            printf("Escolha o codigo da operacao: \n");
            scanf("%c", &codigo);
            getchar();



            switch (codigo)
            {
            case 'M' :

                resultado_modulo = (Z1mod * Z2mod);
                resultado_arg = (Z1arg + Z2arg);

                printf("Insira o formato de saida (C)artesiano ou (E)xponencial:\n");
                scanf("%c", &FS);
                getchar();

                switch (FS)
                {
                case 'C':
                    resultado_cartesianoX = resultado_modulo*(cos(resultado_arg*pi/180));
                    resultado_cartesianoY = resultado_modulo* (sin(resultado_arg*pi/180));
                    printf("Os valores iniciais foram Z1:%lf + %lfi e Z2:%lf + %lfi\n", Z_1_1, Z_1_2, Z_2_1, Z_2_2);
                    printf("O formato de saida escolhido foi o cartesiano.\n");
                    printf("O resultado da multiplicacao Z1 X Z2 foi %lf + %lfi \n", resultado_cartesianoX,resultado_cartesianoY);
                    printf("Pressione ENTER para ir ao MENU de operacoes.\n");

                    break;
                case 'E':
                    printf("Os valores iniciais foram Z1:%lf + %lfi e Z2:%lf + %lfi\n", Z_1_1, Z_1_2, Z_2_1, Z_2_2);
                    printf("O formato de saida escolhido foi o exponencial.\n");
                    printf("O resultado da multiplicacao Z1 X Z2 foi: modulo (%lf) e fase (%lf graus). \n", resultado_modulo,resultado_arg);
                    printf("Pressione ENTER para ir ao MENU de operacoes.\n");

                }

                break;
            case 'D' :

                resultado_modulo = (Z1mod / Z2mod);
                resultado_arg = (Z1arg - Z2arg);

                printf("Insira o formato de saida (C)artesiano ou (E)xponencial:\n");
                scanf("%c", &FS);
                getchar();

                switch (FS)
                {
                case 'C':
                    resultado_cartesianoX = resultado_modulo*(cos(resultado_arg*pi/180));
                    resultado_cartesianoY = resultado_modulo* (sin(resultado_arg*pi/180));
                    printf("Os valores iniciais foram Z1:%lf + %lfi e Z2:%lf + %lfi\n", Z_1_1, Z_1_2, Z_2_1, Z_2_2);
                    printf("O formato de saida escolhido foi o cartesiano.\n");
                    printf("O resultado da divisao Z1 / Z2 foi %lf + %lfi \n", resultado_cartesianoX,resultado_cartesianoY);
                    printf("Pressione ENTER para ir ao MENU de operacoes.\n");

                    break;
                case 'E':
                    printf("Os valores iniciais foram Z1:%lf + %lfi e Z2:%lf + %lfi\n", Z_1_1, Z_1_2, Z_2_1, Z_2_2);
                    printf("O formato de saida escolhido foi o exponencial.\n");
                    printf("O resultado da divisao Z1 / Z2 foi: modulo (%lf) e fase (%lf graus). \n", resultado_modulo,resultado_arg);
                    printf("Pressione ENTER para ir ao MENU de operacoes.\n");

                }
                break;

            case 'E' :
                printf("Os valores iniciais foram Z1:%lf + %lfi e Z2:%lf + %lfi\n", Z_1_1, Z_1_2, Z_2_1, Z_2_2);
                printf("A operacao escohida foi converte exponencial.\n");
                printf("Z1:Modulo (%lf) Fase (%lf graus).\n",Z1mod,Z1arg);
                printf("Z2:Modulo (%lf) Fase (%lf graus).\n",Z2mod,Z2arg);
                printf("Pressione ENTER para ir ao MENU de operacoes.\n");

                break;
            case 'C':
                printf("Os valores iniciais foram Z1:%lf + %lfi e Z2:%lf + %lfi\n", Z_1_1, Z_1_2, Z_2_1, Z_2_2);
                printf("A operacao escohida foi converte cartesiano.\n");
                printf("Os valores ja estao no formato cartesiano.\n");
                printf("Pressione ENTER para ir ao MENU de operacoes.\n");

            }
        }
        while(codigo != 'Z');
        break;

    case 'E':
        do
        {

            getchar();
            printf("**********MENU DE OPERACOES********\n");
            printf("(M) - Multiplicacao\n");
            printf("(D) - Divisao\n");
            printf("(E) - Converte Exponencial\n");
            printf("(C) - Converte Cartesiano\n");
            printf("(Z) - Para fechar o programa\n");
            printf("***********************************\n");
            printf("Escolha o codigo da operacao: \n");
            scanf("%c", &codigo);
            getchar();

            switch (codigo)
            {
            case 'M' :

                resultado_modulo = (Z1mod * Z2mod);
                resultado_arg = (Z1arg + Z2arg);

                printf("Insira o formato de saida (C)artesiano ou (E)xponencial:\n");
                scanf("%c", &FS);
                getchar();

                switch (FS)
                {
                case 'C':
                    resultado_cartesianoX = resultado_modulo*(cos(resultado_arg*pi/180));
                    resultado_cartesianoY = resultado_modulo* (sin(resultado_arg*pi/180));
                    printf("Os valores iniciais foram Z1:%lf + %lfi e Z2:%lf + %lfi\n", Z_1_1, Z_1_2, Z_2_1, Z_2_2);
                    printf("O formato de saida escolhido foi o cartesiano.\n");
                    printf("O resultado da multiplicacao Z1 X Z2 foi %lf + %lfi \n", resultado_cartesianoX,resultado_cartesianoY);
                    printf("Pressione ENTER para ir ao MENU de operacoes.\n");

                    break;
                case 'E':
                    printf("Os valores iniciais foram Z1:%lf + %lfi e Z2:%lf + %lfi\n", Z_1_1, Z_1_2, Z_2_1, Z_2_2);
                    printf("O formato de saida escolhido foi o exponencial.\n");
                    printf("O resultado da multiplicacao Z1 X Z2 foi: modulo (%lf) e fase (%lf graus). \n", resultado_modulo,resultado_arg);
                    printf("Pressione ENTER para ir ao MENU de operacoes.\n");

                }
                break;
            case 'D' :

                resultado_modulo = (Z1mod / Z2mod);
                resultado_arg = (Z1arg - Z2arg);

                printf("Insira o formato de saida (C)artesiano ou (E)xponencial:\n");
                scanf("%c", &FS);
                getchar();

                switch (FS)
                {
                case 'C':
                    resultado_cartesianoX = resultado_modulo*(cos(resultado_arg*pi/180));
                    resultado_cartesianoY = resultado_modulo* (sin(resultado_arg*pi/180));
                    printf("Os valores iniciais foram Z1:%lf + %lfi e Z2:%lf + %lfi\n", Z_1_1, Z_1_2, Z_2_1, Z_2_2);
                    printf("O formato de saida escolhido foi o cartesiano.\n");
                    printf("O resultado da divisao Z1 / Z2 foi %lf + %lfi \n", resultado_cartesianoX,resultado_cartesianoY);
                    printf("Pressione ENTER para ir ao MENU de operacoes.\n");

                    break;
                case 'E':
                    printf("Os valores iniciais foram Z1:%lf + %lfi e Z2:%lf + %lfi\n", Z_1_1, Z_1_2, Z_2_1, Z_2_2);
                    printf("O formato de saida escolhido foi o exponencial.\n");
                    printf("O resultado da divisao Z1 / Z2 foi: modulo (%lf) e fase (%lf graus). \n", resultado_modulo,resultado_arg);
                    printf("Pressione ENTER para ir ao MENU de operacoes.\n");

                }
                break;
            case 'E' :
                printf("Os valores iniciais foram Z1:%lf + %lfi e Z2:%lf + %lfi\n", Z_1_1, Z_1_2, Z_2_1, Z_2_2);
                printf("A operacao escohida foi converte exponencial.\n");
                printf("Os valores ja estao no formato exponencial.\n");
                printf("Pressione ENTER para ir ao MENU de operacoes.\n");

                break;
            case 'C':
                printf("Os valores iniciais foram Z1:%lf + %lfi e Z2:%lf + %lfi\n", Z_1_1, Z_1_2, Z_2_1, Z_2_2);
                printf("A operacao escohida foi converte cartesiano.\n");
                printf("Z1: %lf + %lfi",cart1x,cart1y);
                printf("Z2: %lf + %lfi",cart2x,cart2y);
                printf("Pressione ENTER para ir ao MENU de operacoes.\n");
            }
        }
        while (codigo != 'Z');
    }
    system("PAUSE");
    return 0;

}




