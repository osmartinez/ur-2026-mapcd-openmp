# Entregable: medición de rendimiento con OpenMP

Implementar en C un programa que calcule la suma de un vector grande con OpenMP.

## Requisitos del ejercicio

1. Reservar e inicializar un vector de tamaño suficientemente grande.
2. Paralelizar el cálculo de la suma (por ejemplo, con `parallel for` y `reduction`).
3. Medir el tiempo con `omp_get_wtime()`.
4. Usar `omp_set_num_threads()` para ejecutar el programa con distintos hilos (por ejemplo: 1, 2, 4, 8, ...).
5. Registrar en una tabla: número de hilos y tiempo total.

## Entrega

Incluir:

- Código fuente comentado.
- Tabla de tiempos por número de hilos.
- Breve análisis de la evolución del rendimiento: identificar cuándo deja de mejorar y dónde aparece saturación.
- Gráfica **tiempo vs hilos** (eje X: hilos, eje Y: tiempo).
