#include "holberton.h"
/**
 * prime_number - is a funtion
 * @n: is a variable
 * @a: is a variable
 * Return: funtion
 */
int prime_number(int n, int a)
{
if ((a * a) == n || n < 0)
return (0);
else if ((a * a) > n)
return (1);
return (prime_number(n, (a + 1)));
}
/**
 * is_prime_number - is a funtion
 * @n: is a variable
 * Return: funtion
 */
int is_prime_number(int n)
{
return (prime_number(n, 1));
}
