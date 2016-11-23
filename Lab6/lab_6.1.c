#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
char nome[100];
int i;
printf("Digite seu nome: ");
gets(nome);



for(i=0;i<=strlen(nome)+ 8 ;i++){
    printf("*");
}


printf("\n*");
for(i=0;i<=strlen(nome)+ 6 ;i++){
    printf(" ");
}

printf("*");

printf("\n* Ola, %s *\n", nome);
printf("*");
for(i=0;i<=strlen(nome)+ 6 ;i++){
    printf(" ");
}

printf("*\n");

for(i=0;i<=strlen(nome) + 8;i++){
    printf("*");
}

return 0;
}
