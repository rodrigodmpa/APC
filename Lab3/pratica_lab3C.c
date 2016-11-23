float precisao = 0.0001;
double diferenca_a_b = 5000, a = 0, b = 12.5,x, x1, x2, fa, fb, fx1, fx2;
double x_vol_max;

int main (){
while (diferenca_a_b > precisao)
{

    x1 = a + fabs(a - b)/3;
    x2 = a + 2 * (fabs(a - b)/3);
    fa = a * (50 - 2*a) * (25 - 2*a);
    fx1 = x1 * (50 - 2*x1) * (25 - 2*x1);
    fx2 = x2 * (50 - 2*x2) * (25 - 2*x2);
    fb = b * (50 - 2*b) * (25 - 2*b);

    if (fx1 > fa && fx2 > fx1 && fb > fx2)
        a = x1;
    if (fx1 > fa && fx2 > fx1 && fx2 > fb)
        a = x1;
    if (fx1 > fa && fx1 > fx2 && fx2 > fb)
        b = x2;
    if (fa > fx1 && fx1 > fx2 && fx2 > fb)
        b = x2;

    diferenca_a_b = fabs(a - b);
}

    x_vol_max = (a + b)/2;
    printf("O valor de x para se obter o maior volume eh: %.4lf\n", x_vol_max);
    printf("O volume eh de: %.2lf\n", fa);

    system("PAUSE");
    return 0;
    }
