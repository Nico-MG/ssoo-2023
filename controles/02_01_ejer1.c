#include <stdio.h>

int main() {
    int num;
    while (1) {
        printf("Ingrese un numero: ");
        scanf("%i",&num);
        if ((num >= 0) && (num <= 10)) {
            printf("Numero correcto\n");
            break;
        }
        printf("Por favor, ingrese un numero entre el 0 y el 10\n");
    }
    return 0;
}