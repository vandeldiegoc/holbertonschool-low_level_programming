#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int c;
int h;
c = 0;
while (c <= 9)
{
h = (c + 1);
while (h <= 9)
{
if (c != 9 || h != 9)
{
putchar(',');
putchar(' ');
}
putchar('0' + c);
putchar('0' + h);
h++;
}
c++;
}
putchar('\n');
return (0);
}
