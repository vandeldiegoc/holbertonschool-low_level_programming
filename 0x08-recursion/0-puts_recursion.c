#include "holberton.h"

/**
 * _puts_recursion  - is a funtion
 * @s: is a variable
 */

void _puts_recursion(char *s)
{


if (*s != 0)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
