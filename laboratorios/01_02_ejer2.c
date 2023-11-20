#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mutex;
pthread_barrier_t barrera;

void *carrera(void *arg) {

  int id = *((int *)arg);

  pthread_mutex_lock(&mutex);
  printf("corredor %d listo\n",id);
  pthread_mutex_unlock(&mutex);

  pthread_barrier_wait(&barrera);
  
  pthread_mutex_lock(&mutex);
  printf("llega al checkpoint corredor %d\n",id);
  pthread_mutex_unlock(&mutex);

  pthread_barrier_wait(&barrera);
  
  pthread_mutex_lock(&mutex);
  printf("llega a la meta corredor %d\n",id);
  pthread_mutex_unlock(&mutex);
  
  pthread_exit(NULL);
}

int main() {
  pthread_t A, B, C;
  int ids[] = {1,2,3};

  pthread_mutex_init(&mutex, NULL);
  pthread_barrier_init(&barrera, NULL, 3);

  pthread_create(&A, NULL, carrera, (void *)&ids[0]);
  pthread_create(&B, NULL, carrera, (void *)&ids[1]);
  pthread_create(&C, NULL, carrera, (void *)&ids[2]);

  pthread_join(A, NULL);
  pthread_join(B, NULL);
  pthread_join(C, NULL);

  pthread_mutex_destroy(&mutex);
  pthread_barrier_destroy(&barrera);
  
  return 0;
}