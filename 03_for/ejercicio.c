#include <stdio.h>
#include <omp.h>

int main(void) {
    int datos[12];

    // Inicialización secuencial
    for (int i = 0; i < 12; i++) {
        datos[i] = i * 3;
    }

    // TODO: paralelizar este bucle para calcular y mostrar cuadrados
    for (int i = 0; i < 12; i++) {
        int valor = datos[i] * datos[i];
        printf("i=%d valor=%d hilo=%d\n", i, valor, omp_get_thread_num());
    }

    return 0;
}
