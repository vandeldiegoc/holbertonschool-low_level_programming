#include "holberton.h"

/**
 * cont - is a funtion
 * @s: is a variable
 * Return: funtion
 */
int cont(char *s)
{
if ((*s) == 0)
return (0);
return (1 + cont(s + 1));
}

/**
 * palindrome - is a funtion
 * @size: is a variable
 * @s: is a variable
 * Return: funtion
 */
int palindrome(char *s, int size)
{
if (size <= 0)
return (1);
else if (*s == *(s + size))
return (palindrome(s + 1, size - 2));
return (0);
}

/**
 * is_palindrome - is a funtion
 * @s: is a variable
 * Return: funtion
 */

int is_palindrome(char *s)
{
	int size;

	if (*(s) == '\0')
		return (0);

	size = cont(s);

	return (palindrome(s, size - 1));

}
