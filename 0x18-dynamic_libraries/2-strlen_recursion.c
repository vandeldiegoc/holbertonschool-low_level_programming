#include "holberton.h"
/**
 * _strlen_recursion - is a funtion
 * @s: is a variable
 * Return: 1
 */
int _strlen_recursion(char *s)
{
if (*s)
{
s++;
return (1 + _strlen_recursion(s));
}
else
return (0);
}
