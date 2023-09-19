#include <stdio.h>

int main() {

    float num1, num2, num3, promedio;

    printf("Ingrese nota: ");
    scanf("%f", &num1);
    printf("Ingrese nota: ");
    scanf("%f", &num2);
    printf("Ingrese nota: ");
    scanf("%f", &num3);

    promedio = num1*0.4 + num2*0.3 + num3*0.3;

    printf("El promedio ponderado es: %.2f\n", promedio);

    if (promedio < 3.9) {printf("No ha aprobado\n");}
    else if (promedio > 4.5) {printf("Ha aprobado\n");}
    else {printf("Tiene que dar examen\n");}

    return 0;
}