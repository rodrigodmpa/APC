#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int A=90000000,B=200000000;
    int t=0;




    while (A<B)

    {
        A = A * 1.03;
        B = B * 1.015;
        t += 1 ;

    }

    printf("Em %d anos a populacao de A sera maior que a populacao de B.",t);

    return 0;


}
