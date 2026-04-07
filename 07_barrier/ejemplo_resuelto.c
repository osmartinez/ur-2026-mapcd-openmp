#include <stdio.h>
#include <omp.h>

int main(void) {
    #pragma omp parallel
    {
        int tid = omp_get_thread_num();
        printf("Hilo %d antes de la barrera\n", tid);

        #pragma omp barrier

        printf("Hilo %d después de la barrera\n", tid);
    }

    return 0;
}
