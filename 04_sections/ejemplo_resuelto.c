#include <stdio.h>
#include <omp.h>

int main(void) {
    #pragma omp parallel sections
    {
        #pragma omp section
        {
            printf("Sección A en hilo %d\n", omp_get_thread_num());
        }

        #pragma omp section
        {
            printf("Sección B en hilo %d\n", omp_get_thread_num());
        }

        #pragma omp section
        {
            printf("Sección C en hilo %d\n", omp_get_thread_num());
        }
    }

    return 0;
}
