#include <stdio.h>
#include <string.h>

int main() {
    char texto[100000];
    int conV = 0, conC = 0, largo;

    printf("Ingrese un texto: ");
    fgets(texto,100000,stdin);

    largo = strlen(texto);

    for (int idx = 0; idx < largo - 1; idx++) {
        if (texto[idx] == 'A' || texto[idx] == 'E' || texto[idx] == 'I' || texto[idx] == 'O' || texto[idx] == 'U') {
            conV++;
        } else if (texto[idx] == 'a' || texto[idx] == 'e' || texto[idx] == 'i' || texto[idx] == 'o' || texto[idx] == 'u') {
            conV++;
        } else if (texto[idx] != ' ') {
            conC++;
        }
    }
    printf("Total vocales: %i\n",conV);
    printf("Total consonantes: %i",conC);
    return 0;
}