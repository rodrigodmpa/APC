#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 3
#define MAX1 100
#define MAX2 5
struct taluno{
int nr;
char nome[MAX1],nome_alta[MAX1];
char departamento[MAX2],departamento_alta[MAX2];
float nota[MAX];
float media;
};

int main(){

struct taluno aluno[MAX];
float media_turma;
int i,j;

for(i=0;i<MAX;i++){
    printf("Digite o NUMERO do aluno %d:",i+1);
    scanf("%d", &aluno[i].nr);
    getchar();
    printf("Digite o NOME do aluno %d:",i+1);
    gets(aluno[i].nome);
    printf("Digite o DEPARTAMENTO:");
    gets(aluno[i].departamento);
    printf("Digite a nota 1:");
    scanf("%f", &aluno[i].nota[0]);
    printf("Digite a nota 2:");
    scanf("%f", &aluno[i].nota[1]);
    printf("Digite a nota 3:");
    scanf("%f", &aluno[i].nota[2]);
}
for(j=0;j<MAX;j++){
for(i=0;i<strlen(aluno[j].departamento);i++){
    aluno[j].departamento_alta[i] = toupper(aluno[j].departamento[i]);
    aluno[j].departamento_alta[strlen(aluno[j].departamento)] = '\0';
}
}

for(j=0;j<MAX;j++){
    for(i=1;i<strlen(aluno[j].nome);i++){
        aluno[j].nome_alta[0] = toupper(aluno[j].nome[0]);
        aluno[j].nome_alta[i] = tolower(aluno[j].nome[i]);
        aluno[j].nome_alta[strlen(aluno[j].nome)] = '\0';
    }
}
for(i=0;i<MAX;i++)
    aluno[i].media = 0;

for(j=0;j<MAX;j++){
    for(i=0;i<MAX;i++){
        aluno[j].media = aluno[j].media + aluno[j].nota[i];
    }
    aluno[j].media = aluno[j].media/3;
}

    printf("Numero\t");
    printf("Nome\t");
    printf("\tDepto\t");
    printf("Nota 1\t");
    printf("Nota 2\t");
    printf("Nota 3\t");
    printf("Media\t\n");
for(i=0;i<MAX;i++){

    printf("%d\t",aluno[i].nr);
    printf("%s\t\t",aluno[i].nome_alta);
    printf("%s\t",aluno[i].departamento_alta);
    printf("%.2f\t", aluno[i].nota[0]);
    printf("%.2f\t", aluno[i].nota[1]);
    printf("%.2f\t", aluno[i].nota[2]);
    printf("%.2f\t", aluno[i].media);
    printf("\n");
}

for(i=0;i<MAX;i++){
    media_turma = media_turma + aluno[i].media;
}
media_turma = media_turma/3;

printf("A media da turma foi:%.2f\n",media_turma);

    if(aluno[0].nota[0]<aluno[1].nota[0] && aluno[0].nota[0]<aluno[2].nota[0])
        printf("A menor nota na primeira prova foi %.2f\n", aluno[0].nota[0]);
    else if(aluno[1].nota[0]<aluno[0].nota[0] && aluno[1].nota[0]<aluno[2].nota[0])
        printf("A menor nota na prova 1 foi %.2f\n", aluno[1].nota[0]);
    else if(aluno[2].nota[0]<aluno[0].nota[0] && aluno[2].nota[0]<aluno[1].nota[0])
        printf("A menor nota na prova 1 foi %.2f\n", aluno[2].nota[0]);
    else
        printf("A nota na primeira prova foi igual para todos.\n");

    if(aluno[0].media > aluno[1].media && aluno[0].media > aluno[2].media)
        printf("O aluno que obteve maior media foi: %s\n", aluno[0].nome_alta);
    else if(aluno[1].media > aluno[0].media && aluno[1].media > aluno[2].media)
        printf("O aluno que obteve maior media foi: %s\n", aluno[1].nome_alta);
    else if(aluno[2].media > aluno[0].media && aluno[2].media > aluno[1].media)
        printf("O aluno que obteve maior media foi: %s\n", aluno[2].nome_alta);
    else
        printf("As medias foram iguais.\n");

    j=0;
    for(i=0;i<MAX;i++){
        if (aluno[i].media<5)
            j++;
    }
        printf("O numero de alunos abaixo da media eh(foram):%d\n",j);

    printf("O(s) aluno(s) reprovado(s) foi(ram): ");
    if(j==0)
        printf("Nao ha.\n");
    else
    for(i=0;i<MAX;i++){
        if(aluno[i].media<5.00)
            printf("%s;", aluno[i].nome_alta);

    }
return 0;
}
