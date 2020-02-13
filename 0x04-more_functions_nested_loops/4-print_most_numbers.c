#include "holberton.h"
/**
 * print_most_numbers -  is a funcion
 */
void print_most_numbers(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
if (c == '2' || c == '4')
{
c++;
}
_putchar(c);
}
_putchar('\n');
}
