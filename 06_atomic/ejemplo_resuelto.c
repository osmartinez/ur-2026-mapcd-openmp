#include <stdio.h>
#include <omp.h>

int main(void) {
    long suma = 0;

    #pragma omp parallel for
    for (int i = 1; i <= 100000; i++) {
        #pragma omp atomic
        suma += i;
    }

    printf("Suma final (atomic): %ld\n", suma);
    return 0;
}
