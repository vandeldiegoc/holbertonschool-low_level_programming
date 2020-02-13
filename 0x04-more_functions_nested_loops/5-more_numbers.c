#include "holberton.h"
/**
 *more_numbers -  is a funcion
 *
 */
void more_numbers(void)
{
int c;
int y;
for (y = 0; y <= 9; y++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
_putchar (c / 10 + '0');
}
_putchar(c % 10 + '0');
}
_putchar('\n');
}
}
