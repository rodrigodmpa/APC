#include<stdio.h>
#include<stdlib.h>

int main() {
float a,b,c,x;

printf("Insira a primeira nota:");
scanf("%f", &a);
printf("Insira a segunda nota:");
scanf("%f", &b);
printf("Insira a terceira nota:");
scanf("%f", &c);

x=(a+b+c)/3;



if (x>=5 && x<=10){
        printf("Sua media eh: %f\n\n\n",x);
    printf("**************Aprovado**************\n\n\n");
}
    else if (x<5 && x>=0) {
        printf("Sua media eh: %f\n\n\n",x);
        printf("**************Reprovado**************\n\n\n");
    }
    else
        printf("*Notas Invalidas, insira notas entre 0 e 10 pontos.");
return 0;
}
