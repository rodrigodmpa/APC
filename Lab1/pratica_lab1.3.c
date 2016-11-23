#include<stdio.h>
#include<stdlib.h>
int main() {

int n1, n2, n3, x, z;
printf("Este programa calcula o digito verificador da conta corrente. \n");
printf("Em seguida insira os tres numeros de sua conta corrente: \n");
printf("Digite o primeiro numero da Conta Corrente:");
scanf("%d", &n1);
printf("Digite o segundo numero da Conta Corrente:");
scanf("%d", &n2);
printf("Digite o terceiro numero da Conta Corrente:");
scanf("%d", &n3);

x = ((4*n1) + (3*n2) + (2*n3))%11;
z = 11 - x;

printf("Digito verificador: %d", z);


system("PAUSE");
return 0;
}
