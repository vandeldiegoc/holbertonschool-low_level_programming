#include "holberton.h"

/**
 * *_strstr - is a funtion.
 * @needle: is a variable
 * @haystack: is a variable
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
while (*haystack && *haystack == *needle)
{
haystack++;
needle++;
}
if (*needle != 0)
return (haystack);
haystack++;
}
return (0);
}
