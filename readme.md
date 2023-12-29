# Comprendiendo FreeRTOS y Sistemas Operativos en Tiempo Real (RTOS)

## Introducción:

Los Sistemas Operativos en Tiempo Real (RTOS) son frameworks diseñados para
sistemas embebidos, permitiendo la ejecución de múltiples hilos de manera
concurrente. FreeRTOS, un RTOS popular, utiliza un planificador para gestionar
la ejecución de tareas de manera determinista.

## Conceptos Básicos de Multihilo:

El uso de un RTOS implica ejecutar un planificador que facilita la multihilatura
dentro de un sistema embebido. Si has trabajado con multihilatura en algún
lenguaje, los conceptos son bastante similares.

Las tareas pueden ser lanzadas para ejecutarse durante un tiempo específico o
de manera continua, dependiendo de la estrategia de programación.

## Ejecución de Múltiples Hilos:

Muchos desarrolladores utilizan un RTOS para ejecutar múltiples hilos
"principales" de manera concurrente. Estos hilos pueden comunicarse mediante
varios mecanismos de sincronización:

1. **Semáforos:**
   - Sincronizan la ejecución de tareas.
   - Resuelven problemas como la inversión de prioridad, donde una tarea de
     mayor prioridad espera a una de menor prioridad.

2. **Colas:**
   - Permiten el intercambio de datos entre tareas.
   - Las tareas pausan su ejecución si una cola está vacía hasta que haya datos
     disponibles.

3. **Mutex (Exclusión Mutua):**
   - Protege recursos únicos en el sistema.
   - Evita que múltiples tareas accedan a un recurso simultáneamente, evitando
     conflictos.

4. **Piscinas de Memoria:**
   - Bloques de memoria compartidos entre tareas.

## Ejecución en Tiempo Real:

El término "tiempo real" en RTOS significa ejecuciones deterministas. A
diferencia de los sistemas informáticos tradicionales donde el scheduler
determina cuándo se ejecuta cada hilo, un RTOS utiliza un "tick" del sistema.

### Tick del Sistema:
   - Unidad de tiempo configurable (por ejemplo, milisegundos).
   - Ejecuta tareas de manera round-robin según su tiempo asignado en cada tick.

### Ejecución Determinista:
   - Conocer cuándo y cómo se ejecutará cada tarea.
   - Tiempo real no significa ejecución instantánea, sino tiempos predecibles y
     deterministas.

### Ejecución Preemptiva:
   - Las tareas pueden ejecutarse de manera preemptiva según su prioridad.
   - Tareas con la misma prioridad se ejecutan en round-robin hasta que una se
     pausa o bloquea.

## Exclusión Mutua y Problemas Asociados:

El uso de Mutex (Exclusión Mutua) es crucial para proteger recursos únicos en el
sistema, como hardware exclusivo. Sin embargo, se deben evitar problemas como la
"inversión de prioridad" o "mutual exclusion" entre tareas, lo que podría
bloquear el sistema.

## Conclusión:

Comprender FreeRTOS implica asimilar los fundamentos de la multihilatura, los
mecanismos de sincronización y la naturaleza determinista de la ejecución en
tiempo real. Integrar estos conceptos permite a los desarrolladores diseñar
sistemas embebidos robustos y predecibles.
