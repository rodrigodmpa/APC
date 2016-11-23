#include<stdio.h>
#include<stdlib.h>
int main() {

float a, b, c, x1, x2, delta;
printf("Este programa calcula as duas raizes de uma equacao do segundo grau. \n");
printf("Basta inserir os tres coeficientes da equacao (a, b e c). \n");

printf("Digite o valor de a:");
scanf("%f", &a);
printf("Digite o valor de b:");
scanf("%f", &b);
printf("Digite o valor de c:");
scanf("%f", &c);

delta = (b*b) - (4*a*c);

x1 = (-b + sqrt(delta))/(2*a);
x2 = (-b - sqrt(delta))/(2*a);

printf("O valor das raizes sao:%f, %f.", x1, x2);


system("PAUSE");
return 0;

}
