#include <stdio.h>
#include <omp.h>

int main(void) {
    omp_set_num_threads(4);

    #pragma omp parallel
    {
        int tid = omp_get_thread_num();

        // TODO: completar el número total de hilos
        int total = 0; // reemplazar por llamada OpenMP

        printf("Trabajo inicial: hilo %d de %d\n", tid, total);
    }

    return 0;
}
