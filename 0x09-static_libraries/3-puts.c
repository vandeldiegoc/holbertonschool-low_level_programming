#include "holberton.h"
/**
 * _puts - is a function
 * @str: pointer to a string
 */
void _puts(char *str)
{
int j;
for (j = 0; str[j] != 0; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
