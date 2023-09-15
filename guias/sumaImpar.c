#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 1;
    int suma = 0;
    int aux = 0;
    while (aux < 100) {
        suma += n;
        n += 2;
        aux ++;
    }
    printf("La suma de los primeros numeros impares es: %i\n",suma);
    return 0;
}
