#include <stdio.h>

int main () {

    float num1, num2, num3, num4, promedio;

    printf("Ingrese nota: ");
    scanf("%f", &num1);
    printf("Ingrese nota: ");
    scanf("%f", &num2);
    printf("Ingrese nota: ");
    scanf("%f", &num3);
    printf("Ingrese nota: ");
    scanf("%f", &num4);

    promedio = (num1 + num2 + num3 + num4) / 4.0;

    printf("El promedio simple es: %.2f\n", promedio);

    return 0;
}