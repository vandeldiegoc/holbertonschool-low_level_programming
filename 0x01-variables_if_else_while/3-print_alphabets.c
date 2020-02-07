#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
char ch;
char chx;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (chx = 'A'; chx <= 'Z'; chx++)
{
putchar(chx);
}
putchar('\n');
return (0);
}
