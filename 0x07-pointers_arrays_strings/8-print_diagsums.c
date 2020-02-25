#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - is a funtion.
 * @a: is a variable
 * @size: is a variable
 */

void print_diagsums(int *a, int size)
{
int b, c = 0, d = 0;
for (b = 0; b < size; b++)
{
c += *(a + ((size * b) + b));
d += *(a + (size - 1) * (b + 1));
}
printf("%d, %d\n", c, d);
}
