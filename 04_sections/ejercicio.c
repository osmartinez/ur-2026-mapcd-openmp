#include <stdio.h>
#include <omp.h>

int main(void) {
    int a = 15, b = 5;
    int suma = 0, producto = 0;

    // TODO: usar parallel sections para ejecutar dos tareas independientes:
    // 1) calcular suma = a + b
    // 2) calcular producto = a * b

    printf("Suma: %d\n", suma);
    printf("Producto: %d\n", producto);
    return 0;
}
