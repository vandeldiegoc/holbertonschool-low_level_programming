#include "holberton.h"
/**
 * _strncat- is a funtion.
 * @dest: is a variable
 * @src: is a variable
 * @n: is a variable
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0, b = 0;
for (a = 0; dest[a] != '\0'; a++)
{
}
while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
a++;
b++;
}
return (dest);
}
