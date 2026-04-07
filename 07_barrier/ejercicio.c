#include <stdio.h>
#include <omp.h>

int main(void) {
    #pragma omp parallel
    {
        int tid = omp_get_thread_num();

        printf("Hilo %d termina fase de lectura\n", tid);

        // TODO: colocar barrera para sincronizar a todos los hilos

        printf("Hilo %d inicia fase de cálculo\n", tid);
    }

    return 0;
}
