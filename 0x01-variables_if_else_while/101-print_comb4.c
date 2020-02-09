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
int a;
a = 0;
while (a <= 9)
{
c = (a + 1);
while (c <= 9)
{
h = (c + 1);
while (h <= 9)
{
putchar('0' + a);
putchar('0' + c);
putchar('0' + h);
if (a != 7 | c != 8 || h != 9)
{
putchar(',');
putchar(' ');
}
h++;
}
c++;
}
a++;
}
putchar('\n');
return (0);
}
