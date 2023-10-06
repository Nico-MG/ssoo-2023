#include <stdio.h>

int main() {

    int cont = 10;
    int inicio = 100, fin = 150;

    for (int idx = 1; idx <= cont; idx++) {
        printf("%d\t->\t",idx);

        for (int jdx = inicio; jdx <= fin; jdx += 10) {
            printf("%d\t",jdx);
        }
        
        printf("\n");
    }

    return 0;
}