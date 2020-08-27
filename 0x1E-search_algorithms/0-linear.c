#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: a number array
 * @size: size of array
 * @value: valur by search
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
size_t index;
	for (index = 0; index < size; index++)
		{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		}
return (-1);

}
