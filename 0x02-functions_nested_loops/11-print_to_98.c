#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98  - is a function
 * @a: integer
 * Return: printf
 */
void print_to_98(int a)
{
int c;
if (a > 98)
{
for (c = a; c > 97; c--)
{
printf("%d", c);
if (c != 98)
{
printf(", ");
}
}
}
else
{
for (c = a; c < 99; c++)
{
printf("%d", c);
if (c != 98)
{
printf(", ");
}
}
}
printf("\n");
}
