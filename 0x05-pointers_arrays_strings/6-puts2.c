#include "holberton.h"
/**
 * puts2 -  is a funcion
 * @str: pointer to a  str
 */
void puts2(char *str)
{
int b;
for (b = 0; str[b] != 0; b++)
{
_putchar(str[b]);
b++;
}
_putchar('\n');
}

