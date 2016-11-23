#include <stdio.h>
#include <stdlib.h>

void hanoi(int, char, char, char);

int main(int argc, char *argv[])
{
char A = 'A',B = 'B',C = 'C';
int N;

printf("Digite a quantidade de discos:");
scanf("%d",&N);

hanoi(N,A,B,C);

system("PAUSE");
return 0;
}


void hanoi(int n,char origem, char intermediario, char destino){

if(n==1){
printf("Mover %c --> %c\n",origem,destino);
exit;
}
else{
hanoi(n-1,origem,destino,intermediario);
printf("Mover %c --> %c\n",origem,destino);
hanoi(n-1,intermediario, origem,destino);
}
}
