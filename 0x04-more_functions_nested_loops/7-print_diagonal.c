#include "holberton.h"
/**
 * print_diagonal -  is a funcion
 *@n: is a variable
 */
void print_diagonal(int n)
{
int y;
int h;
if (n == 0)
{
_putchar('\n');
}
for (y = 0; y < n; y++)
{
for (h = 0; h < y; h++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}

