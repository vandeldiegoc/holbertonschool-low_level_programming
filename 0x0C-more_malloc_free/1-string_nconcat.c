#include "holberton.h"
/**
 * *string_nconcat -  is a funcion
 * @s1: is a variable
 * @s2: is a variable
 * @n: is a variable
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b;
char *ptr;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; s1[a] != '\0'; a++)
;
for (b = 0; s2[b] != '\0'; b++)
;
if (n >= b)
n = b;
ptr = malloc(1 + (a + n) * sizeof(*ptr));
if (ptr == NULL)
return (NULL);
for (a = 0; s1[a] != '\0'; a++)
{
ptr[a] = s1[a];
}
for (b = 0; b < n; b++, a++)
{
ptr[a] = s2[b];
}
ptr[a] = '\0';
return (ptr);
}

