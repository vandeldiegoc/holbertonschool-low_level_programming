#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *str_concat -  is a funcion
 * @s1: is a variable
 * @s2: is a variable
 * Return: 0
 */


char *str_concat(char *s1, char *s2)
{
int c, b, s, j;
char *p;
if (s1 == NULL)
return (NULL);
if (s2 == NULL)
{
return (NULL);
}
for (c = 0; s1[c] != 0; c++)
;
for (b = 0; s2[b] != 0; b++)
;
p = (char *)malloc(1 + sizeof(char) * (c + b));
if (p == NULL)
{
return (NULL);
}
for (s = 0; s1[s] != 0; s++)
{
p[s] = s1[s];
}
for (j = 0; s2[j] != 0; j++)
{
p[s + j] = s2[j];
}
return (p);
}
