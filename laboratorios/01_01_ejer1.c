#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>

#define MAX_HILOS 10

sem_t izq;
sem_t der;
pthread_mutex_t mutex;
pthread_barrier_t barrera;

void *cruzar_izq(void *arg) {
  int id = *((int *)arg);

  pthread_mutex_lock(&mutex);
  printf("auto %d\t esperando a cruzar\n",id);
  pthread_mutex_unlock(&mutex);
  pthread_barrier_wait(&barrera);

  pthread_mutex_lock(&mutex);
  sem_wait(&izq);
  printf("auto %d\t listo para cruzar\n",id);
  sem_post(&der);
  sem_wait(&der);
  printf("auto %d\t ha cruzado en %d seg\n",id,((rand()%3)+1));
  sem_post(&izq);
  pthread_mutex_unlock(&mutex);

  pthread_exit(NULL);
} 


int main() {

  pthread_t hilos[MAX_HILOS];
  int ids[] = {1,2,3,4,5,6,7,8,9,10};
  srand(10);

  sem_init(&izq, 0, 1);
  sem_init(&der, 0, 0);
  pthread_mutex_init(&mutex, NULL);
  pthread_barrier_init(&barrera, NULL, MAX_HILOS);

  for (int idx = 0; idx < MAX_HILOS; ++idx) {
    pthread_create(&hilos[idx], NULL, cruzar_izq, &ids[idx]);
  }

  for (int idx = 0; idx < MAX_HILOS; ++idx) {
    pthread_join(hilos[idx], NULL);
  }

  sem_destroy(&izq);
  sem_destroy(&der);
  pthread_mutex_destroy(&mutex);
  pthread_barrier_destroy(&barrera);
  
  return 0;
}