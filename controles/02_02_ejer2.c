#include <stdio.h>
#include <string.h>

int main() {

    float A, B, C, res;
    char op[1];

    printf("Ingrese valor A: ");
    scanf("%f",&A);
    printf("Ingrese valor B: ");
    scanf("%f",&B);
    printf("Ingrese valor C: ");
    scanf("%f",&C);

    printf("Ingrese operador: ");
    scanf("%s",&op);

    if      (op[0] == '+') {res = A + B + C;}
    else if (op[0] == '-') {res = A - B - C;}
    else if (op[0] == '*') {res = A * B * C;}
    else if (op[0] == '/') {res = A / B / C;}
    printf("El resultado es: %.4f",res);

    return 0;
}