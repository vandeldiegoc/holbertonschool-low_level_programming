#include "holberton.h"
/**
 * *rot13 - is a funtion.
 * @s: is a variable
 * Return: s
 */
char *rot13(char *s)
{
int a, b;
char alfa[] = "abcdefghijklmnopqrstuvwxyz";
char beta[] = "nopqrstuvwxyzabcdefghijklmi";
for (a = 0; s[a] != 0; a++)
{
for (b = 0; alfa[b] != 0; b++)
{
if (s[a] == alfa[b])
{
s[a] = beta[b];
break;
}
}
}
return (s);
}

