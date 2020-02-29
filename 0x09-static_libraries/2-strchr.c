#include "holberton.h"

/**
 * *_strchr - is a funtion.
 * @c: is a variable
 * @s: is a variable
 * Return: s
 */
char *_strchr(char *s, char c)
{
int a;
for (a = 0; s[a] != 0; a++)
{
if (s[a] == c)
{
return (s + a);
}

}
if (s[a] == c)
{
return (s + a);
}
else
{
return (0);
}
}
