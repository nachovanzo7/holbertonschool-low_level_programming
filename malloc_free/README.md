En el lenguaje de programación C, la gestión dinámica de memoria es una habilidad crucial, y se lleva a cabo mediante cuatro funciones principales: malloc, free, calloc y realloc. Estas funciones permiten al programador reservar, liberar y redimensionar memoria en tiempo de ejecución.

--malloc (Memory Allocation)--
Propósito: Reserva un bloque de memoria contigua de un tamaño especificado.
Sintaxis: void* malloc(size_t size);
Parámetros: size es la cantidad de bytes que se desean reservar.
Retorno: Devuelve un puntero al comienzo del bloque de memoria reservado. Si la reserva falla, devuelve NULL.
Uso:

int* ptr = (int*)malloc(10 * sizeof(int));
if (ptr == NULL) {
    // Manejo del error
}

--free (Liberar Memoria)--
Propósito: Libera un bloque de memoria previamente reservado con malloc, calloc o realloc.
Sintaxis: void free(void* ptr);
Parámetros: ptr es un puntero a un bloque de memoria previamente reservado.
Retorno: No tiene valor de retorno.
Uso:

free(ptr);

--calloc (Contiguous Allocation)--
Propósito: Reserva memoria para un arreglo de elementos, inicializando cada byte en 0.
Sintaxis: void* calloc(size_t num, size_t size);
Parámetros:
num: Número de elementos a reservar.
size: Tamaño de cada elemento.
Retorno: Devuelve un puntero al comienzo del bloque de memoria reservada. Si la reserva falla, devuelve NULL.
Diferencia con malloc: calloc inicializa la memoria reservada a 0.
Uso:

int* ptr = (int*)calloc(10, sizeof(int));
if (ptr == NULL) {
    // Manejo del error
}

--realloc (Reallocation)--
Propósito: Cambia el tamaño de un bloque de memoria previamente reservado.
Sintaxis: void* realloc(void* ptr, size_t size);
Parámetros:
ptr: Puntero al bloque de memoria previamente reservado.
size: Nuevo tamaño en bytes del bloque de memoria.
Retorno: Devuelve un puntero al bloque de memoria redimensionado. Si la redimensión falla, devuelve NULL.
Consideraciones:
Si ptr es NULL, realloc actúa como malloc.
Si size es 0 y ptr no es NULL, realloc actúa como free.
La nueva ubicación de la memoria puede ser diferente a la original, por lo que ptr puede cambiar.
Uso:

int* ptr = (int*)realloc(ptr, 20 * sizeof(int));
if (ptr == NULL) {
    // Manejo del error
}

--Buenas Prácticas--
Comprobar siempre el retorno de malloc, calloc y realloc: Verificar que el puntero retornado no sea NULL para evitar errores de segmentación.
Liberar memoria: Siempre usar free para liberar memoria reservada y evitar fugas de memoria.
Inicialización: Usar calloc si se necesita memoria inicializada a 0.
Gestionar realloc: Manejar cuidadosamente realloc ya que puede mover la memoria a una nueva ubicación.
