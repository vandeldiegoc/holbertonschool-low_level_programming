#include "holberton.h"
/**
 * print_triangle -  is a funcion
 *@size: is a variable
 */
void print_triangle(int size)
{
int y;
int h;
int n = size;
int j;

if (n > 0)
{
for (y = 1; y <= n; y++)
{
for (h = n; h > y; h--)
{
_putchar(' ');
}
for (j = 0; j < y; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else if (n <= 0)
_putchar('\n');
}
