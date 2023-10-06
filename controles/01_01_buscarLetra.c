#include <stdio.h>
#include <string.h>

int main() {
    char palabra[10000], letra[1];
    int cont = 0, largo;

    printf("Ingrese una frase: ");
    fgets(palabra,10000,stdin);

    printf("Ingrese una letra: ");
    scanf("%c",&letra);

    largo = strlen(palabra);

    for (int idx = 0; idx < largo - 1; idx++) {
        if (palabra[idx] == letra[0]) { cont++;}
    }

    printf("La cantidad de letras (%c) que se encontraron fueron de: %d",letra[0],cont);

    return 0;
}