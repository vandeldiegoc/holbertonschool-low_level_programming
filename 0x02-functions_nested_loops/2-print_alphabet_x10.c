#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int b = 0;
char c;
while (b <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
b++;
_putchar('\n');
}
}

