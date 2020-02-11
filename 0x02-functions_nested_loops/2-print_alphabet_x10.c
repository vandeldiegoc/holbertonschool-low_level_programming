#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int b;
b = 0;
char c;
while (b < 10)
{
for (c = 'a'; c <= 'z'; c++) 
{
_putchar(c);
}
_putchar('\n');
b++;
}
}

