#include "holberton.h"
/**
 * _strlen_recursion - is a funtion
 * @s: is a variable
 * Return: 1
 */
int _strlen_recursion(char *s)
{
if (*s)
return (1 + _strlen_recursion(s + 1));
}
else
return (0);
