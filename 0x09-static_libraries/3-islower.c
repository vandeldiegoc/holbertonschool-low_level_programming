#include "holberton.h"
/**
 *_islower -  is a funcion
 *@c: is a variable
 *Return: 1 if c is lowercase,  0 otherwise
 */
int _islower(int c)
{
int e = c;
if (e >= 'a' && e <= 'z')
{
return (1);
}
else
{
return (0);
}
}
