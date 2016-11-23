#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(){

int numeros[MAX];
int i;

for(i=0;i<=MAX-1;i++){
printf("Insira um numero:");
scanf("%d", &numeros[i]);
}
printf("\nOs numeros na ordem inversa foram:");
for (i=MAX-1;i>=0;i--){

    printf("\n%d",numeros[i]);

}
return 0;

}
