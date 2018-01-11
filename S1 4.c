
#include <stdio.h>
int main() {
    int x,y;
    int S,I,P,C,M;
    double a,b;
    double R;

    printf("Dati valori lui x si y");
    scanf("%d", &x);
    scanf("%d", &y);

        {
        S=x+y;
        I=x-y;
        P=x*y;
        C=x/y;
        M=x%y;
        }
        printf("Addition=%d\n", S);
        printf("Subtraction=%d\n",I);
        printf("Multiplication=%d\n",P);
        printf("Integer division=%d\n",C);
        printf("Modulus=%d\n",M);

    printf("Dati valori lui a si b");
    scanf("%lf", &a);
    scanf("%lf", &b);
        R=a/b;
        printf("Real division=%.2lf", R);

    return 0;
}
