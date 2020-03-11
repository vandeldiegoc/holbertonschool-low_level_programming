#include "function_pointers.h"

/**
 * print_name-  is a funcion
 * @name: is a variable
 * @f: is a variable
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
