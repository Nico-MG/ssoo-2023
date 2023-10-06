#include <stdio.h>

int main() {

    int contp = 0, conti = 0, num;

    while (1) {
        printf("Ingrese un numero: ");
        scanf("%d",&num);

        if (num < 0) { break;}
        else if (num % 2 == 0 && num > 0) {contp++;}
        else if (num % 2 == 1 && num > 0) {conti++;}
    } 

    printf("La cantida de numeros pares fueron de %d, y de numeros impares fueron: %d", contp,conti);

    return 0;
}