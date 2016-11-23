#include<stdio.h>
#include<stdlib.h>
int main() {

float cf, custo;
printf("Este programa calcula o valor de mercado de um carro a partir de seu \nvalor de fabrica. \n");

printf("Insira o custo de fabrica do seu carro:");
scanf("%f", &cf);

custo = 1.73*cf;

printf("Valor total do carro: %f reais", custo);


system("PAUSE");
return 0;
}
