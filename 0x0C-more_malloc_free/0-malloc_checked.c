#include "holberton.h"

/**
 * *malloc_checked -  is a funcion
 * @b: is a variable
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
