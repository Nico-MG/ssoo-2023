#include <stdio.h>
#include <math.h>

int main() {

    float cat1, cat2;
    float hipo, peri, area;

    printf("Ingrese el primer cateto: ");
    scanf("%f",&cat1);
    printf("Ingrese el primer cateto: ");
    scanf("%f",&cat2);

    if (cat1 < 0 || cat2 < 0) {
        printf("Ingrese numeros positivos");
        return 1;
    }

    hipo = sqrt((pow(cat1, 2) + pow(cat2, 2)));
    area = ((cat1 * cat2) / 2.0);
    peri = (hipo + cat1 + cat2);

    printf("La hipotenusa del triangulo es: %f\n",hipo);
    printf("El perimetro del triangulo es: %f\n",peri);
    printf("El area del triangulo es: %f\n",area);

    return 0;
}