#include "holberton.h"

#include "holberton.h"
/**
 * *_realloc -  is a funcion
 * @old_size: is a variable
 * @new_size: is a variable
 * @ptr: is a variable
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new;
char *help;
unsigned int a = 0;
unsigned int b = 0;
if (ptr == NULL)
{
new = malloc(new_size);
if (new == NULL)
return (NULL);
return (new);
}
if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
return (ptr);
help = ptr;
new = malloc(new_size);
if (new == NULL)
return (NULL);
if (new_size > old_size)
b = old_size;
else
b = new_size;
while (a < b)
{
new[a] = help[a];
a++;
}
free(ptr);
	return (new);
}

