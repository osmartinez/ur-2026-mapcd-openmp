#include <stdio.h>
#include <omp.h>

int main(void) {
    printf("omp_get_num_procs(): %d\n", omp_get_num_procs());

    #pragma omp parallel
    {
        printf("Parallel ejecutado por hilo %d\n", omp_get_thread_num());

        #pragma omp single
        {
            printf("Single ejecutado por hilo %d\n", omp_get_thread_num());
            printf("Hilos en la región paralela: %d\n", omp_get_num_threads());
        }
    }

    return 0;
}
