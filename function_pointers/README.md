## Declaración

Para declarar un puntero a una función, necesitas especificar el tipo de retorno y los parámetros de la función →

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/2d2dadf1-6a51-46e1-8a13-7ea37011e55d/Untitled.png)

Retorno → es el tipo de dato que va a retornar la función (int/char/float/void)

nombre_del_puntero → es el nombre del puntero a la función

tipo_parametro → es el tipo de datos que va a utilizar (int/char/float/void)

### Ejemplo →

Esto declara un puntero `func_ptr` que puede apuntar a funciones que toman dos enteros como parámetros y devuelven un entero.

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/3cc9d8f6-05d2-4d92-852a-f1b04eeec83f/Untitled.png)

---

## Asignar la función al puntero

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/364d0e08-ffb9-4649-b3aa-c7f7fb068138/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/091c3642-646e-4036-afe5-b10899a6a643/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/f0bfdea0-f2d2-4741-9115-17f159793b1a/eeada439-c299-478d-b672-d5baf5e59530/Untitled.png)

sumar → funcion simple

func_ptr → puntero que apunta a una funcion que retorna int

func_ptr = &sumar; → asignamos el puntero func_ptr a la funcion sumar

---

- Un puntero a función es una variable que almacena la dirección de una función.

---

- Permite llamar a funciones, pasar funciones como argumentos y almacenarlas en estructuras de datos.

---

- Se declara especificando el tipo de retorno y los tipos de parámetros.

---

- Se usa asignando una función al puntero y luego llamándola a través del puntero.
