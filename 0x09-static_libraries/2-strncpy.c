#include "holberton.h"
/**
 * _strncpy - is a funtion.
 * @dest: is a variable
 * @src: is a variable
 * @n: is a variable
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; a < n && src[a] != 0; a++)
{
dest[a] = src[a];
}
for (; a < n; a++)
{
dest[a] = '\0';
}
return (dest);
}


