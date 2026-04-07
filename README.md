# Prácticas de OpenMP en C

Este repositorio contiene ejercicios breves de OpenMP organizados por tema.
Cada carpeta incluye:

- `ejemplo_resuelto.c`: referencia completa.
- `ejercicio.c`: versión con una o varias líneas pendientes para completar.

## Requisitos

- Compilador C con soporte OpenMP (GCC o Clang).
- Linux, macOS o WSL recomendado.

## Compilación y ejecución

Desde la carpeta de cada ejercicio:

```bash
gcc -fopenmp ejemplo_resuelto.c -o ejemplo_resuelto
./ejemplo_resuelto

gcc -fopenmp ejercicio.c -o ejercicio
./ejercicio
```

## Estructura

- `01_cores`: detectar hilos disponibles y procesadores.
- `02_parallel`: región `parallel`.
- `03_for`: bucle `omp for`.
- `04_sections`: secciones independientes.
- `05_critical`: sección crítica.
- `06_atomic`: operación atómica.
- `07_barrier`: sincronización con barrera.
- `entregable`: enunciado de práctica para entregar.

## Sugerencia didáctica

Primero ejecutar `ejemplo_resuelto.c`, luego completar `ejercicio.c` y comparar salidas.
