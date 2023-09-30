#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char palabra[100];

    printf("Ingese una palabra: ");
    scanf("%s", &palabra);
    int longitud = strlen(palabra);

    for (int idx = 0; idx < longitud / 2; idx++)
    {
        if (!(palabra[idx] == palabra[longitud - idx - 1]))
        {
            printf("La palabra %s no es un palindromo\n", palabra);
            return 1;
        }
    }

    printf("La palabra %s es un palindromo\n", palabra);
    return 0;
}
