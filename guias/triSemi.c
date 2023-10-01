#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float semi, area;
    printf("Ingrese un lado del triangulo: ");
    scanf("%d",&a);
    printf("Ingrese un lado del triangulo: ");
    scanf("%d",&b);
    printf("Ingrese un lado del triangulo: ");
    scanf("%d",&c);
    if (a + b > c && a + c > b && b + c > a) {
        semi = (a + b + c) / 2.0;
        area = sqrt(semi * (semi - a) * (semi - b) * (semi - c));
        printf("El semiperimetro es: %f\n",semi);
        printf("El area es: %f\n",area);
    }
    else {
        printf("Triangulo no valido\n");
    }
    return 0;
}