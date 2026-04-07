#include <stdio.h>
#include <omp.h>

int main(void) {
    const int n = 16;

    #pragma omp parallel for
    for (int i = 0; i < n; i++) {
        printf("i=%d procesado por hilo %d\n", i, omp_get_thread_num());
    }

    return 0;
}
