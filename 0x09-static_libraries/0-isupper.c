#include "holberton.h"
/**
 * _isupper -  is a funcion
 *@c: is a variable
 *Return: 1 if c is lowercase,  0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
