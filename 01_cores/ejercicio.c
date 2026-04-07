#include <stdio.h>
#include <omp.h>

int main(void) {
    int procs = omp_get_num_procs();
    printf("Procesadores lógicos disponibles: %d\n", procs);

    int hilos_usados = 0;

    #pragma omp parallel
    {
        // TODO: guardar en hilos_usados el número de hilos de esta región
        // Sugerencia: usar una región single para evitar impresiones repetidas
    }

    printf("Hilos creados en la región: %d\n", hilos_usados);
    return 0;
}
