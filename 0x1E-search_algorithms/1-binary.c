#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of integers
 * @array: a number array
 * @size: size of array
 * @value: valur by search
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
size_t l = 0, r = size - 1, m = -1, i;
if (array == NULL)
return (-1);
while (l <= r)
{
printf("Searching in array: ");
for (i = l; i <= r; i++)
{
printf("%d", array[i]);
if (i < r)
printf(", ");
}
printf("\n");
m = l + (r - l) / 2;
if (array[m] == value)
return (m);
if (array[m] < value)
l = m + 1;
else
r = m - 1;
}
return (-1);
}
