#include "holberton.h"

/**
 *  rev_string -  is a funcion
 * @s: string
 */
void rev_string(char *s)
{
int b, c, e;
char h;
for (b = 0; s[b] != 0; b++)
{
}
e = b;
for (b--, c = 0; c < e / 2; b--, c++)
{
h = s[c];
s[c] = s[b];
s[b] = h;
}
}
