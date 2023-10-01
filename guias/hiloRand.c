#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#define NUM_HILOS 20

void *sumarand(void *suma) {
    suma += (rand() % 20);
    pthread_exit(NULL);
}

int main() {
    pthread_t hilos[NUM_HILOS];
    srand(10);
    int *suma;
    for (int i = 0; i < 20; i++)
    {
        pthread_create(&hilos[i], NULL, sumarand,NULL);
    }
    
    printf("%d\n", suma);
    
}