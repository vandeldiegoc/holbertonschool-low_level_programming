#include "variadic_functions.h"
/**
 * print_numbers - is a funcion that add the ellipsis (...)
 * @n: number of number inside ellipsi
 * @separator: string between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int f;
int  a;
va_list v_l;
va_start(v_l, n);
for (f = 0; f < n; f++)
{
a = va_arg(v_l, int);
printf("%d", a);
if (separator != NULL && f != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
}

