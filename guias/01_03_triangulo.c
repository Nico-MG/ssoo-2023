#include <stdio.h>

int main() {
    int a, b, c;
    printf("Ingrese un lado del triangulo: ");
    scanf("%d",&a);
    printf("Ingrese un lado del triangulo: ");
    scanf("%d",&b);
    printf("Ingrese un lado del triangulo: ");
    scanf("%d",&c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && c == b) {
            printf("Es un triangulo equilatero\n");
        }
        else if (a ==b || b == c || c == a) {
            printf("Triangulo isoceles\n");
        }
        else{
            printf("Triangulo escaleno\n");
        }
    }
    else {
        printf("Triangulo no valido\n");
    }
    return 0;
}
