#include "holberton.h"
/**
 * puts_half -  is a funcion
 * @str: string
 */
void puts_half(char *str)
{
int j;

for (j = 0; str[j] != 0; j++)
{
j++;
}
for (j /= 2; str[j] != 0; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
