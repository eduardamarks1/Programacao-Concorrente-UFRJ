#ifndef _priority_rwlock_
#define _priority_rwlock_

#include <pthread.h>

pthread_cond_t condLeitores, condEscritores;
int leit, escr, escrEsperando;

void rwlock_priority_read_lock(pthread_mutex_t* mutex);
void rwlock_priority_read_unlock(pthread_mutex_t* mutex);
void rwlock_priority_write_lock(pthread_mutex_t* mutex);
void rwlock_priority_write_unlock(pthread_mutex_t* mutex);
void rwlock_priority_init();
void rwlock_priority_destroy();

#endif