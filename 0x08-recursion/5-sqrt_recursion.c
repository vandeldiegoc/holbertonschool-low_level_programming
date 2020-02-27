#include "holberton.h"

/**
 * sqrt_recursion - is a funtion
 * @n: is a variable
 * @a: is a variable
 * Return: funtion
 */

int sqrt_recursion(int n, int a)
{
	if ((a * a) == n)
		return (a);
	else if ((a * a) > n)
		return (-a);
	return (sqrt_recursion(n, (a + 1)));
}

/**
 * _sqrt_recursion - is a funtion
 * @n: is a variable
 * Return: funtion
 */

int _sqrt_recursion(int n)
{
	return (sqrt_recursion(n, 1));
}
