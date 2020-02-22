#include "holberton.h"
/**
 * cap_string - is a funtion
 * @s: is a variable
 *
 * Return: s
 */
char *cap_string(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
if (a == 0 && s[a] >= 'a' && s[a] <= 'z')
{
s[a] = s[a] - 32;
}
if (s[a] >= 'a' && s[a] <= 'z' && (s[a - 1] == 32 || s[a - 1] == ','
|| s[a - 1] == ';' || s[a - 1] == '.'
|| s[a - 1] == '!' || s[a - 1] == '?'
|| s[a - 1] == '"' || s[a - 1] == '('
|| s[a - 1] == ')' || s[a - 1] == '{'
|| s[a - 1] == '}' || s[a - 1] == '\n'
|| s[a - 1] == '\t'))
{
s[a] = s[a] - 32;
}
a++;
}
return (s);
}
