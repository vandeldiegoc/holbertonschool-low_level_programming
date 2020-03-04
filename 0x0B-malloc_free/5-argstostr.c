#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *argstostr -  is a funcion
 * @ac: is a variable
 * @av: is a variable
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int a, b;
int c = 0;
int d = 0;
char *p;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
c++;
}
}
p = malloc(sizeof(char) * (c + ac + 1));
if (p == NULL)
{
return (NULL);
}
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
p[d] = av[a][b];
d++;
}
p[d] = '\n';
d++;
}
return (p);
}
