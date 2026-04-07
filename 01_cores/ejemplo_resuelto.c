#include <stdio.h>
#include <omp.h>

int main(void) {
    printf("omp_get_num_procs(): %d\n", omp_get_num_procs());

    #pragma omp parallel
    {
        #pragma omp single
        {
            printf("Hilos en la región paralela: %d\n", omp_get_num_threads());
        }
    }

    return 0;
}
