/**
*op_add - Suma de numeros a + b
*Return: retorna el resultado de la suma (a + b)
*@a: primer numero
*@b: segundo numero
*/

int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
*op_sub - Resta de numeros a - b
*Return: retorna el resultado de la resta (a - b)
*@a: primer numero
*@b: segundo numero
*/

int op_sub(int a, int b)
{
	int sub;

	sub = a - b;

	return (sub);
}

/**
*op_mul - Multiplicacion de numeros a * b
*Return: retorna el resultado del producto (a * b)
*@a: primer numero
*@b: segundo numero
*/

int op_mul(int a, int b)
{
	int mul;

	mul = a * b;

	return (mul);
}

/**
*op_div - Division de numeros a / b
*Return: retorna el resultado de la division (a / b)
*@a: primer numero
*@b: segundo numero
*/

int op_div(int a, int b)
{
	int div;

	div = a / b;

	return (div);
}

/**
*op_mod - Calculo resto a % b
*Return: retorna el resto de la division (a / b)
*@a: primer numero
*@b: segundo numero
*/

int op_mod(int a, int b)
{
	int mod;

	mod = a % b;

	return (mod);
}
