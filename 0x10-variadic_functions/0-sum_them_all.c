#include "variadic_functions.h"

/**
 * sum_them_all - is a funcion that add the ellipsis (...)
 * @n: number of number inside ellipsi
 * Return: f
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int f = 0;
va_list ls_variable;
va_start(ls_variable, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
f += va_arg(ls_variable, int);
}
va_end(ls_variable);
return (f);
}
