Structures

## ¿Qué es?

En C, una estructura es un tipo de dato compuesto que permite almacenar diferentes tipos de datos bajo un mismo nombre. Es una forma de organizar datos para representar una entidad compleja que puede contener múltiples elementos con diferentes tipos de datos.

---

### Definición y Uso Básico

En términos generales, una estructura se define utilizando la palabra clave `struct` seguida por un nombre que identifica la estructura. Dentro de las llaves `{}` se especifican los miembros de la estructura, cada uno de los cuales puede ser de cualquier tipo de dato válido en C, incluidos otros tipos de estructuras, punteros, arreglos, etc.

---

EJEMPLO →  

En este ejemplo:

- `struct persona` es el nombre de la estructura.
- `nombre`, `edad` y `altura` son los miembros de la estructura.
    - `nombre` es un arreglo de caracteres que puede almacenar hasta 50 caracteres (incluyendo el carácter nulo terminador `'\0'`).
    - `edad` es un entero que guarda la edad de la persona.
    - `altura` es un número de punto flotante que guarda la altura de la persona en metros.

### Declaración de Variables de Estructura

Después de definir la estructura, puedes declarar variables de ese tipo de la siguiente manera →

Esto crea dos variables `p1` y `p2` del tipo `struct persona`. Cada variable tiene sus propios miembros (`nombre`, `edad` y `altura`), los cuales pueden ser accedidos y modificados individualmente.


Para acceder a los miembros de una estructura, utilizas el operador punto (`.`) 

En este código:

- `p1.nombre`, `p1.edad` y `p1.altura` se refieren a los miembros individuales de la estructura `p1`.
- `strcpy` se utiliza para copiar la cadena `"Juan"` en el miembro `nombre` de `p1`.
- `printf` se utiliza para mostrar los valores de los miembros de la estructura `p1`.

---

### Solución: Protección contra la Inclusión Múltiple

Para evitar estos problemas, se utiliza la protección contra la inclusión múltiple utilizando directivas `#ifndef`, `#define` y `#endif`:

- `#ifndef` (if not defined): Verifica si un símbolo (usualmente el nombre del archivo de encabezado en mayúsculas, por ejemplo `DOG_H`) no está definido.
- `#define` (define): Define ese símbolo, indicando que el archivo de encabezado ha sido incluido.
- Todo el contenido del archivo de encabezado se coloca entre `#ifndef` y `#endif`, de modo que solo se incluye una vez por cada archivo fuente que lo requiera.

EJEMPLO → 

Las estructuras en C son muy útiles para organizar datos relacionados de manera lógica y para representar entidades complejas en programas. Permiten:

- Agrupar datos de diferentes tipos bajo un solo nombre.
- Pasar y devolver estructuras como argumentos de funciones.
- Manipular conjuntos de datos de manera más organizada y coherente.

En resumen, una estructura en C proporciona una manera eficaz de manejar datos estructurados de forma organizada y flexible, lo cual es fundamental para el desarrollo de programas más complejos y estructurados.
