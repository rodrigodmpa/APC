#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main()
{
    int N=0;
    float A=0,B=0,C=1,D=0;
    double tempo;
    time_t I,F;

    time(&I);

    do {
        B=A;
        D=pow((-1),N)*(C);
        A=B+(4/D);
        C=C+2;
        N++;


}while (fabs(A-B)>0.001);

time(&F);
tempo = difftime(F,I);


printf("O valor de pi eh %f e o programa levou %.4f segundos para executar.\n", B,tempo);

system("PAUSE");

return 0;

}
