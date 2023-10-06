#include <stdio.h>
#include <string.h>

int main() {

    char palabra[10000];
    int largo;

    printf("Ingrese una palabra: ");
    scanf("%s",&palabra);
    largo = strlen(palabra);

    for (int idx = 0; idx < largo/2; idx++) {
        if (!(palabra[idx] == palabra[largo - idx -1])) {
            printf("No es un palindromo");
            return 1;
        }
    }

    printf("Es un palindromo");

    return 0;
}