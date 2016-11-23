#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>

int main()
{
    char a,b,c,lanche;
    float valor;
    printf("___________________________________________________________________________ \n");
    printf("|                                                                          |\n");
    printf("|                     ********       MENU      ********                    |\n");
    printf("|                                                                          |\n");
    printf("|                                                                          |\n");
    printf("|a)Completo:                                                               |\n");
    printf("|                                                                          |\n");
    printf("|Bacon(R$0,60), ovo frito(R$0,70), queijo, queijo extra(R$0,25),hamburguer,|\n");
    printf("|hamburguer extra(R$1,50), alface, tomate e pao.                           |\n");
    printf("|                                                                          |\n");
    printf("|b)Economico:                                                              |\n");
    printf("|                                                                          |\n");
    printf("|Queijo(R$0,50), alface(R$0,50),tomate(R$0,50), hamburguer e pao.          |\n");
    printf("|                                                                          |\n");
    printf("|c)Super-economico:                                                        |\n");
    printf("|                                                                          |\n");
    printf("|Hamburguer(R$1,50) e pao(R$0,50).                                         |\n");
    printf("|                                                                          |\n");
    printf("|                                                                          |\n");
    printf("|*Para escolher o seu lanche basta digitar a opcao de lanche no campo      |\n");
    printf("|'Lanche'. Exemplo: 'a'.                                                   |\n");
    printf("|                                                                          |\n");
    printf("|                                                                          |\n");
    printf("|                                                                          |\n");
    printf("|__________________________________________________________________________|\n");
    printf("Lanche:");
    scanf("%[^\n]", &lanche);
    switch (lanche)
    {
    case 'a':
        valor = 0.60+0.70+0.50+0.25+1.50+1.50+0.50+0.50+0.50 ;
        printf("O valor do seu lanche eh:%.2f R$\n", valor);
        break;

    case 'b':
        valor = 0.50+0.50+0.50+1.50+0.50;
        printf("O valor do seu lanche eh:%.2f R$\n R$", valor);
        break;

    case 'c':
        valor = 1.50+0.50;
        printf("O valor do seu lanche eh:%.2f R$\n R$", valor);
        break;

    default:
        printf("Opcao invalida.\n");
    }



    return 0;
}
