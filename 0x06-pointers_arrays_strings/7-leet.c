#include "holberton.h"
/**
 * *leet - is a funtion.
 * @s: is a variable
 * Return: s
 */
char *leet(char *s)
{
char l[] = "aeotlAEOTL";
char n[] = "4307143071";
int a;
int b;
for (a = 0; s[a] != 0; a++)
{
for (b = 0; l[b] != 0; b++)
{
if (s[a] == l[b])
{
s[a] = n[b];
}
}
}
return (s);
}
