#include <stdio.h>
#include <stdlib.h>

struct Dados_de_aluno
{
    int matricula;
    float P1,P2,P3,T1,T2;
};

int main(int argc ,char *argv[])
{
    int N,i;
    FILE *fp;
    struct Dados_de_aluno *aluno;

    if (argc!=2)
    {
        printf("Voce esqueceu de digitar o nome do arquivo.\n");
        exit(1);
    }

    fp=fopen(argv[1], "w");
    rewind(fp);

    printf("Digite a quantidade de alunos:");
    scanf("%d", &N);

    aluno = (struct Dados_de_aluno *)malloc(N*sizeof(struct Dados_de_aluno));

    for(i=0; i<N; i++)
    {
        printf("Digite a matricula do aluno [%d]:",i);
        scanf("%d", &aluno[i].matricula);
        printf("Digite a nota da P1 do aluno [%d]:",i);
        scanf("%f", &aluno[i].P1);
        printf("Digite a nota da P2 do aluno [%d]:",i);
        scanf("%f", &aluno[i].P2);
        printf("Digite a nota da P3 do aluno [%d]:",i);
        scanf("%f", &aluno[i].P3);
        printf("Digite a nota da T1 do aluno [%d]:",i);
        scanf("%f", &aluno[i].T1);
        printf("Digite a nota da T2 do aluno [%d]:",i);
        scanf("%f", &aluno[i].T2);
    }

    for(i=0; i<N; i++)
    {
        fprintf(fp,"%d  ", aluno[i].matricula);
        fprintf(fp,"%.2f  ", aluno[i].P1);
        fprintf(fp,"%.2f  ", aluno[i].P2);
        fprintf(fp,"%.2f  ", aluno[i].P3);
        fprintf(fp,"%.2f  ", aluno[i].T1);
        fprintf(fp,"%.2f ", aluno[i].T2);
        if (i != (N-1))
            fprintf(fp,"\n");
    }

    fclose(fp);
    free(aluno);
    system("PAUSE");
    return 0;
}
