#include "holberton.h"
/**
 * print_rev -  is a funcion
 * @s: string
 */

void print_rev(char *s)
{
int j;
for (j = 0; s[j] != 0; j++)
{
_putchar(s[j]);
}
_putchar('\n');
}

