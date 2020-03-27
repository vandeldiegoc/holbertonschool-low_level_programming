#include "holberton.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int
* @b: is pointing to a string
* Return: rest
**/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int i, j;

	if (b == NULL || (*b != '0' && *b != '1'))
		{
		return (0);
		}
	i = 0;
	while (b[i] != 0)
	{
		i++;
	}
	res = j = 0;
	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		res += (b[i] - 48) * (1 << j);
		i--, j++;
	}
	return (res);
}
