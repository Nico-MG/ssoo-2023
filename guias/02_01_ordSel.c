#include <stdio.h>
int main()
{
    int lista[] = {5,4,3,2,1};
    int aux,largo;
    //largo = 5;
    largo = sizeof lista / sizeof lista[0];

    for (int i = 0; i < largo; i++) { printf("%d\t",lista[i]);}
    printf("\n");

    for (int idx = 0; idx < largo - 1; idx++)
    {
        for (int jdx = idx + 1; jdx < largo; jdx++)
        {
            if (lista[idx] > lista[jdx])
            {
                aux = lista[idx];
                lista[idx] = lista[jdx];
                lista[jdx] = aux;
            }
        }
    }

    for (int i = 0; i < largo; i++) { printf("%d\t",lista[i]);}
    return 0;
}