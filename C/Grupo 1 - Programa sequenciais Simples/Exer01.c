#include<stdio.h>

/* Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.*/

int main()
{
    float metrosMedida;

    printf("\nDigite o valor em metros ");
    scanf("%f",&metrosMedida);

    printf("\nMetros para Decimetros:%.2f\nMetros para centimetros:%.2f\nMetros para milimetros:%.2f\n",metrosMedida*10,metrosMedida*100,metrosMedida*1000);

    return 0;
}
