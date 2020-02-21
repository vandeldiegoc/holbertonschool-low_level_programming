#include "holberton.h"
/**
 * _strcmp - is a funtion.
 * @s1: is a variable
 * @s2: is a variable
 * Return: s1-s2
 */
int _strcmp(char *s1, char *s2)
{
int a;
for (a = 0; s1[a] != 0 && s2[a] != 0 && s1 == s2 ; a++)
{
}
return (s1[a] - s2[a]);
}
