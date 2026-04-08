#include <stdio.h>
#include <omp.h>

int main(void) {

    #pragma omp parallel
    {
        int id = omp_get_thread_num();

        // TODO: cada astronauta imprime:
        // "Astronauta X listo"

        
        #pragma omp single
        {
            // TODO: un único hilo imprime:
            // "Control: misión iniciada"
        }


        // TODO: cada astronauta imprime:
        // "Astronauta X trabajando"


        #pragma omp single
        {
            // TODO: un único hilo imprime:
            // "Control: misión finalizada"
        }
    }

    return 0;
}