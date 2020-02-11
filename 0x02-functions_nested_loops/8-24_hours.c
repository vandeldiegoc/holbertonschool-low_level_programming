#include "holberton.h"
/**
* jack_bauer  - is a funcion
* Return: c.
*/
void jack_bauer(void)
{
int c;
int h;
for (c = 0; c < 24; c++)
{
for (h = 0; h < 60; h++)
{
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');
_putchar(':');
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
_putchar('\n');
}
}
}
