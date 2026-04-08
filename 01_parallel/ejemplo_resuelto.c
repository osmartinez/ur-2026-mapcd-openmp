#include <stdio.h>
#include <omp.h>

int main(void) {
    #pragma omp parallel
    {
        int tid = omp_get_thread_num();
        int nt = omp_get_num_threads();
        printf("Hola desde hilo %d de %d\n", tid, nt);
    }

    return 0;
}
