#include <stdio.h>
#include <omp.h>

int main(void) {
    int maximo = -1;

    #pragma omp parallel for
    for (int i = 0; i < 50; i++) {
        int candidato = (i * 7) % 31;

        // TODO: proteger con critical la actualización de maximo
        // solo si candidato > maximo
    }

    printf("Máximo encontrado: %d\n", maximo);
    return 0;
}
