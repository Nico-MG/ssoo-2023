#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
void main()
{
    pid_t pid_padre, pid_hijos, proc1, proc2;
    clock_t inicio, fin;
    double tiempo_cpu;
    pid_padre = fork();

    if (pid_padre == 0)
    {
        for (int i = 1; i <= 50; i++)
        {
            inicio = clock();
            proc1 = getppid();
            proc2 = getpid();
            fin = clock() - inicio;

            tiempo_cpu = ((double) fin) / CLOCKS_PER_SEC;

            printf("Soy el hijo %d, Mi padre es= %d, Mi PID= %d\n", i, proc1, proc2);
            printf("Tiempo: %f segundos\n", tiempo_cpu);
        }
        printf("Proceso PADRE = %d\n", getppid());
    }
    else
    {
        pid_hijos = wait();
    }
    return 0;
}