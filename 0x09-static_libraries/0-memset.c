#include "holberton.h"

/**
 * *_memset - is a funtion
 * @b: is a variable
 * @s: is a variable
 * @n: is a variable
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
