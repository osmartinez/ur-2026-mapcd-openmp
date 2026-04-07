#include <stdio.h>
#include <omp.h>

int main(void) {
    int pares = 0;

    #pragma omp parallel for
    for (int i = 0; i < 100000; i++) {
        if (i % 2 == 0) {
            // TODO: hacer atómico el incremento de pares
            pares++;
        }
    }

    printf("Cantidad de pares: %d\n", pares);
    return 0;
}
