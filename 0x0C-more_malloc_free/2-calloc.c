#include "holberton.h"
/**
 * *_calloc-  is a funcion
 * @nmemb: is a variable
 * @size: is a variable
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int a;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
char *ptr;
ptr = malloc(size * nmemb);
if (ptr == NULL)
{
return (NULL);
}
for (a = 0; a < (size* nmemb); a++)
{
ptr[a] = 0;
}
return (ptr);
}
