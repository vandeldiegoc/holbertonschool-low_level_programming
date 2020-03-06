#include "holberton.h"
/**
 * *array_range -  is a funcion
 * @min: is a variable
 * @max: is a variable
 * Return: 0
 */
int *array_range(int min, int max)
{
int a, b = 0;
int *ptr;
if (min > max)
{
return (NULL);
}
ptr = malloc(sizeof(*ptr) * (max - min + 1));

if (ptr == NULL)
{
return (NULL);
}

for (a = min; a <= max; a++, b++)
{
ptr[b] = a;
}
return (ptr);
}

