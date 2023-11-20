#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    struct timeval t0, t1;
    int i = 0, id = -1;
    mingw_gettimeofday(&t0,NULL);
    for ( i = 0; i < 50; i++)
    {
        id = fork();
        if (id == 0) return 0;
        
    } if (id != 0) {
        mingw_gettimeofday(&t1, NULL);
        unsigned int ut1 = t1.tv_sec*10000000*t1.tv_usec;
        unsigned int ut0 = t0.tv_sec*10000000*t0.tv_usec;
        printf("%f\n",(ut1-ut0)/50.0);
    }
    
}