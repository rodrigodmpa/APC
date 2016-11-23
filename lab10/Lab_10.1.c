#include <stdio.h>
#include <stdlib.h>

potencia(int ,int);

int main(){
int X,n,valor;

printf("Digite X:");
scanf("%d", &X);

printf("Digite n:");
scanf("%d", &n);

valor = potencia(n,X);
printf("%d elevado a %d eh %d\n.",X,n,valor);
system("PAUSE");
return 0;
}
potencia(int n, int X){

if(n == 0)
return 1;

else
return X*potencia((n-1),X);

}
