#include "function_pointers.h"

/**
 * array_iterator-  is a funcion
 * @array: is a variable
 * @size: is a variable
 * @action: is a variable
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;
if (array != NULL && action != NULL)
{
for (a = 0; a < size; a++)
((*action)(array[a]));
}
}
