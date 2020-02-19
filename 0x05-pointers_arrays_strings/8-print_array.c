#include <stdio.h>
/**
 * print_array -  is a funcion
 * @a: string
 * @n: number string
 *
 */
void print_array(int *a, int n)
{
int b;
for (b = 0; b < n; b++)
{
if (b != 0)
{
printf(", ");
}
printf("%d", a[b]);
}
printf("\n");
}
