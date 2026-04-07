#include <stdio.h>
#include <omp.h>

int main(void) {
    int contador = 0;

    #pragma omp parallel for
    for (int i = 0; i < 100000; i++) {
        #pragma omp critical
        {
            contador++;
        }
    }

    printf("Contador final (critical): %d\n", contador);
    return 0;
}
