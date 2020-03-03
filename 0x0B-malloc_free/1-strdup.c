#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup -  is a funcion
 * @str: is a variable
 * Return: 0
 */
char *_strdup(char *str)
{
char *cp;
int a, b;
if (str == NULL)
{
return (NULL);
}
for (a = 0; str[a] != 0; a++)
{
}
cp = (char *)malloc(sizeof(char) * (a + 1));
if (cp == NULL)
{
return (NULL);
}
for (b = 0; str[b] != 0; b++)
{
cp[b] = str[b];
}
return (cp);
}
