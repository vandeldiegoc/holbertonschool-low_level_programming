#include "holberton.h"
/**
 * _strcat- is a funtion.
 * @dest: is a variable
 * @src: is a variable
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int a, b;
for (a = 0; dest[a] != 0; a++)
{
}
for (b = 0; src[b] != 0; b++)
{
dest[a + b] = src[b];
}
return (dest);
}
