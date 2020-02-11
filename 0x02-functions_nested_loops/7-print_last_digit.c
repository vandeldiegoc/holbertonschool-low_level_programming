#include "holberton.h"
/**
* print_last_digit - is a funcion.
* @a : is a variable.
* Return: j.
*/

int print_last_digit(int j)
{
int c;
if (j < 0)
{
c = -1 * (j % 10);
_putchar(c + '0');
return (c);
}
else
{
c = j  % 10;
_putchar(c + '0');
return (c);
}
}
