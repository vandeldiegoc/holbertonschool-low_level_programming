#include "holberton.h"
/**
 * reverse_array - is a funtion.
 * @a: is a variable
 * @n: is a variable
 */
void reverse_array(int *a, int n)
{
int temp;
int c, b;
b = n;
for (c = 0; c < b; c++)
{
temp = a[c];
a[c] = a[n - c - 1];
a[n - c - 1] = temp;
b--;
}
}
