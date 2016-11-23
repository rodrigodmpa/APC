#include<stdio.h>
#include<stdlib.h>


int main()
{
    double conta1=0,conta2=0,conta3=0,conta_banco=0;
    int conta, operacao, conta_destino;
    float deposito,saque,transferencia;
    do
    {
        printf("******************************************************************************\n");
        printf("                                  PORTAL DO SISBANCO\n");
        printf("******************************************************************************\n");
        printf("Digite sua conta ou 0 para sair.");
        scanf("%d",&conta);
        system("cls");

        while (conta!=1 && conta!=2 && conta!=3 && conta != 0)
        {
            printf("Conta invalida! Tente Novamente!\n");
            printf("Digite sua Conta:");
            scanf("%d",&conta);
            system("cls");
        }
        if (conta==0)
        {

            return 0;
        }



        do
        {
            if (conta==1)
            {
                printf("***************************************************************************\n");
                printf("                                  OPERACOES\n");
                printf("***************************************************************************\n");
                printf("(1) DEPOSITO\n");
                printf("(2) SAQUE\n");
                printf("(3) TRANSFERENCIA\n");
                printf("(4) SALDO\n");
                printf("(0) PARA SAIR\n");
                printf("**************************************************************************\n");
                printf("Escolha uma opcao:");
                scanf("%d", &operacao);
                system("cls");
                while (operacao != 1 && operacao != 2 && operacao != 3 && operacao != 4 && operacao != 0 )
                {
                    printf("Operacao invalida! Tente novamente!\n");
                    printf("Escolha uma opcao:");
                    scanf("%d", &operacao);
                }
                if (operacao ==1) //DEPOSITO 1
                {
                    printf("Valor depositado:");
                    scanf("%f",&deposito);
                    conta1 +=deposito;
                    printf("Deposito efetuado com sucesso!\n");
                }
                if (operacao ==2) //SAQUE 1
                {

                    printf("Valor (R$):");
                    scanf("%f", &saque);
                    if(1.0038*saque>conta1)
                        printf("Saldo insuficiente!\n");
                    else
                    {
                        conta1 -=1.0038*saque;
                        conta_banco += 0.0038*saque;
                        printf("Saque efetuado com sucesso!\n");
                    }
                }
                if (operacao ==3) // TRANSFERENCIA 1
                {
                    printf("Digite o numero da conta de destino:");
                    scanf("%d", &conta_destino);

                    printf("Valor (R$):");
                    scanf("%f",&transferencia);
                    if (transferencia*1.0038>conta1)
                        printf("Saldo insuficiente.\n");

                    else
                    {
                        if (conta_destino == 2)
                        {
                            conta1 -=1.0038*transferencia;
                            conta2 +=transferencia;
                            conta_banco +=0.0038*transferencia;
                            printf("Transferencia efetuada com sucesso!\n");
                        }
                        else if (conta_destino == 3)
                        {
                            conta1 -= 1.0038*transferencia;
                            conta3 +=transferencia;
                            conta_banco +=0.0038*transferencia;
                            printf("Transferencia efetuada com sucesso!\n");
                        }
                        else
                            printf("Conta destino invalida!\n");
                    }

                }
                if (operacao == 4) // SALDO 1
                {
                    printf("Saldo (R$):%.2f\n",conta1);


                }
            }
            else if (conta==2)
            {

                printf("***************************************************************************\n");
                printf("                                OPERACOES\n");
                printf("***************************************************************************\n");
                printf("(1) DEPOSITO\n");
                printf("(2) SAQUE\n");
                printf("(3) TRANSFERENCIA\n");
                printf("(4) SALDO\n");
                printf("(0) PARA SAIR\n");
                printf("***************************************************************************\n");
                printf("Escolha uma opcao:");
                scanf("%d", &operacao);
                system("cls");
                while (operacao != 1 && operacao != 2 && operacao != 3 && operacao != 4 && operacao != 0 )
                {
                    printf("Operacao invalida! Tente novamente!\n");
                    printf("Escolha uma opcao:");
                    scanf("%d", &operacao);
                }
                if (operacao ==1) //DEPOSITO 2
                {
                    printf("Valor depositado:");
                    scanf("%f",&deposito);
                    conta2 +=deposito;
                    printf("Deposito efetuado com sucesso!\n");
                }
                if (operacao ==2) //SAQUE 2
                {

                    printf("Valor (R$):");
                    scanf("%f", &saque);
                    if(1.0038*saque>conta2)
                        printf("Saldo insuficiente!\n");
                    else
                    {

                        conta2 -=1.0038*saque;
                        conta_banco += 0.0038*saque;
                        printf("Saque efetuado com sucesso!\n");
                    }
                }
                if (operacao ==3) //TRANSFERENCIA 2
                {
                    printf("Digite o numero da conta de destino:");
                    scanf("%d", &conta_destino);

                    printf("Valor (R$):");
                    scanf("%f",&transferencia);
                    if (transferencia*1.0038>conta2)
                        printf("Saldo insuficiente.\n");
                    else
                    {
                        if (conta_destino == 1)
                        {
                            conta2 -=1.0038*transferencia;
                            conta1 +=transferencia;
                            conta_banco +=0.0038*transferencia;
                            printf("Transferencia efetuada com sucesso!\n");
                        }
                        else if (conta_destino == 3)
                        {
                            conta2 -= 1.0038*transferencia;
                            conta3 += transferencia;
                            conta_banco +=0.0038*transferencia;
                            printf("Transferencia efetuada com sucesso!\n");
                        }
                        else
                            printf("Conta destino invalida!\n");
                    }

                }
                if (operacao == 4) // SALDO 2
                {
                    printf("Saldo (R$):%.2f\n",conta2);


                }

            }
            else if (conta==3)
            {
                printf("***************************************************************************\n");
                printf("                                  OPERACOES\n");
                printf("***************************************************************************\n");
                printf("(1) DEPOSITO\n");
                printf("(2) SAQUE\n");
                printf("(3) TRANSFERENCIA\n");
                printf("(4) SALDO\n");
                printf("(0) PARA SAIR\n");
                printf("***************************************************************************\n");
                printf("Escolha uma opcao:");
                scanf("%d", &operacao);
                system("cls");
                while (operacao != 1 && operacao != 2 && operacao != 3 && operacao != 4 && operacao != 0 )
                {
                    printf("Operacao invalida! Tente novamente!\n");
                    printf("Escolha uma opcao:");
                    scanf("%d", &operacao);
                }
                if (operacao ==1 ) //DEPOSITO 3
                {
                    printf("Valor depositado:");
                    scanf("%f",&deposito);
                    conta3 +=deposito;
                    printf("Deposito efetuado com sucesso!\n");

                }
                if (operacao ==2 ) //SAQUE 3
                {

                    printf("Valor (R$):");
                    scanf("%f", &saque);
                    if(1.0038*saque>conta3)
                        printf("Saldo insuficiente!\n");
                    else
                    {

                        conta3 -=1.0038*saque;
                        conta_banco += 0.0038*saque;
                        printf("Saque efetuado com sucesso!\n");
                    }
                }
                if (operacao ==3) //TRANSFERENCIA 3
                {
                    printf("Digite o numero da conta de destino:");
                    scanf("%d", &conta_destino);

                    printf("Valor (R$):");
                    scanf("%f",&transferencia);
                    if (transferencia*1.0038>conta3)
                        printf("Saldo insuficiente.\n");
                    else
                    {
                        if (conta_destino == 1)
                        {
                            conta3 -=1.0038*transferencia;
                            conta1 +=transferencia;
                            conta_banco +=0.0038*transferencia;
                            printf("Transferencia efetuada com sucesso!\n");
                        }
                        else if (conta_destino == 2)
                        {
                            conta3 -= 1.0038*transferencia;
                            conta2 += transferencia;
                            conta_banco +=0.0038*transferencia;
                            printf("Transferencia efetuada com sucesso!\n");
                        }
                        else
                            printf("Conta destino invalida!\n");
                    }

                }
                if (operacao == 4) // SALDO 3
                {
                    printf("Saldo (R$):%.2f\n",conta3);


                }
            }


        }
        while (operacao == 1 || operacao == 2 || operacao == 3 || operacao == 4 );

    }
    while (operacao==0);

    return 0;

}
