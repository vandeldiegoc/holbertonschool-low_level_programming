#include "holberton.h"
/**
 * print_square -  is a funcion
 *@size: is a variable
 */
void print_square(int size)
{
int y;
int h;
int n = size;
if (n <= 0)
{
_putchar('\n');
}
for (h = 0; h < n; h++)
{
for (y = 0; y < n; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
