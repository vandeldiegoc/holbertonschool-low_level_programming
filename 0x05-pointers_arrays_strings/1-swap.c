#include "holberton.h"

/**
 * swap_int - is a funtion.
 * @a: is a variable
 * @b: is a variable
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
