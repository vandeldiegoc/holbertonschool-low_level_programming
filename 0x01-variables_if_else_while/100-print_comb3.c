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
putchar('0' + c);
putchar('0' + h);
if (c != 8 || h != 9)
{
putchar(',');
putchar(' ');
}
h++;
}
c++;
}
putchar('\n');
return (0);
}
