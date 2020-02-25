#include "holberton.h"

/**
 * *_strstr - is a funtion.
 * @needle: is a variable
 * @haystack: is a variable
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
int a = 0;
int b;
int ciclo; 
while (haystack[a] != 0)
{
ciclo = a;
b = 0;
while (needle[b] == haystack[a] && haystack[a] != 0 && haystack[a] != 0)
{
a++;
b++;
}
if (needle[b] == 0)
return (haystack + ciclo);
a = ciclo + 1;
}
return (0);
}
