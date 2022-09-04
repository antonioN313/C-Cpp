#include <stdio.h>

int main()
{
    double raio,A,n;

    n = 3.14159;

    scanf("%lf", &raio);

    raio *= raio;

    A = n*raio;

    printf("A=%.4lf\n",A);

    return 0;
}
