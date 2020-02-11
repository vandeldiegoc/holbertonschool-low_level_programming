#include "holberton.h"
/**
 *_islower -  is a funcion
 *@c: is a variable
 *Return: 1 if c is lowercase,  0 otherwise
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return(1);
}
else if (c >= 'A' && c <= 'Z')
{
return(1);
}
else
{
return(0);
}

_putchar('\n');

}

