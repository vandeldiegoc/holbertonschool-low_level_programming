#include "holberton.h"

/**
* clear_bit - function that sets the value of a bit to 0 at a given index.
* @n: is pointing to a  number
* @index: is pointing to index
*  Return:  value of a bit to 1 at a given index
**/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
{
return (-1);
}
*n &= ~(1 << index);
return (1);
}

