#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *create_array-  is a funcion
 * @size: is a variable
 * @c: is a variable
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
unsigned int a;
char *diego;
diego = malloc(size * sizeof(c));
if (size == 0)
{
return (NULL);
}
if ( diego == 0)
{	
return (NULL);
}
for (a = 0; a < size; a++)
{
diego[a] = c;
}
return (diego);
}
