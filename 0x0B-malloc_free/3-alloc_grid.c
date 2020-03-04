#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * **alloc_grid -  is a funcion
 * @width: is a variable
 * @height: is a variable
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
int **a;
int b, c;
if (width <= 0 || height <= 0)
{
return (NULL);
}
a = malloc(height * sizeof(int *));
if (a == NULL)
{
return (NULL);
}

for (b = 0; b < height; b++)
{
a[b] = malloc(width * sizeof(int));
if (a[b] == NULL)
{
for (c = 0; c <= b; c++)
{
free(a[c]);
}
free(a);
return (NULL);
}
}
for (b = 0; b < height; b++)
{
for (c = 0; c < width; c++)
{
a[b][c] = 0;
}
}
return (a);
}
