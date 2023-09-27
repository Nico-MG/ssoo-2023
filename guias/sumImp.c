#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont = 0;

    for (int i = 1; i <= 100; i++) {
        cont += (2*i) - 1;
    }

    printf("la suma es %d\n",cont);
    return 0;
}