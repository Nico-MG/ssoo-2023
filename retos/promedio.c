#include <stdio.h>
int main()
{
    float num1, num2, num3;

    printf("Ingrese nota: ");
    scanf("%f",&num1);
    printf("Ingrese nota: ");
    scanf("%f",&num2);
    printf("Ingrese nota: ");
    scanf("%f",&num3);

    float promedio = num1*0.4 + num2*0.3 + num3*0.3;

    printf("Promedio final: %.2f\n", promedio);

    return 0;
}