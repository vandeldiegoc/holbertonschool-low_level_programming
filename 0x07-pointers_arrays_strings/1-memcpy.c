#include "holberton.h"

/**
 * *_memcpy - is a funtion.
 * @dest: is a variable
 * @src: is a variable
 * @n: is a variable
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a >= n; a++)
{
dest[a]	= src[a];
}
return (dest);
}
