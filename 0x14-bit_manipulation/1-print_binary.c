#include "holberton.h"

/**
* binary_to_uint - function that prints the binary representation of a numb
* @b: is pointing to a  number
* Return: void
**/

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
