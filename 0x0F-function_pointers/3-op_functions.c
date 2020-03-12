#include "3-calc.h"

/**
 * op_add - is a funcion
 * @a: is a variable
 * @b: is a variable
 * Return: int
 */


int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - is a funcion
 * @a: is a variable
 * @b: is a variable
 * Return: int
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - is a funcion
 * @a: is a variable
 * @b: is a variable
 * Return: int
 */

int op_mul(int a, int b)
{
int mul = a * b;
return (mul);
}

/**
 * op_div - iis a funcion
 * @a: is a variable
 * @b: is a variable
 * Return: int
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - is a funcion
 * @a: is a variable
 * @b: is a variable
 * Return: int
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
