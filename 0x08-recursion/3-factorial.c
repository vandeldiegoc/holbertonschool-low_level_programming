#include "holberton.h"
/**
 * factorial - is a funtion
 * @n: is a variable
 * Return: 1
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
