## Declaración

Para declarar un puntero a una función, necesitas especificar el tipo de retorno y los parámetros de la función →

![image](https://github.com/nachovanzo7/holbertonschool-low_level_programming/assets/109767666/e8cbe4b7-897a-4e76-91ed-d5a89389ed12)


Retorno → es el tipo de dato que va a retornar la función (int/char/float/void)

nombre_del_puntero → es el nombre del puntero a la función

tipo_parametro → es el tipo de datos que va a utilizar (int/char/float/void)

### Ejemplo →

Esto declara un puntero `func_ptr` que puede apuntar a funciones que toman dos enteros como parámetros y devuelven un entero.

![image](https://github.com/nachovanzo7/holbertonschool-low_level_programming/assets/109767666/7ca6961f-32a6-4486-b28a-68f85988499d)


---

## Asignar la función al puntero

![image](https://github.com/nachovanzo7/holbertonschool-low_level_programming/assets/109767666/a4033fb1-7e60-47e2-bbfb-49f48f7b6aa0)


![image](https://github.com/nachovanzo7/holbertonschool-low_level_programming/assets/109767666/eacb11eb-6cc5-434c-a51c-14a0bdcb51d4)

![image](https://github.com/nachovanzo7/holbertonschool-low_level_programming/assets/109767666/cf758208-baf8-45af-ab5c-c05b56aa81f1)


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
