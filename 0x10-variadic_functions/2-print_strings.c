#include "variadic_functions.h"

/**
 * print_strings - is a funcion that add the ellipsis (...)
 * @n: number of number inside ellipsi
 * @separator: number of number inside ellipsi
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int f;
char *a;
va_list v_l;
va_start(v_l, n);
for (f = 0; f < n; f++)
{
a = va_arg(v_l, char *);
if (a != NULL)
{
printf("%s", a);
if (f != (n - 1))
{
printf("%s", separator);
}
}
else
{
printf("(nil)");
if (f != (n - 1))
{
printf("%s", separator);
}

}
}
va_end(v_l);
printf("\n");
}

