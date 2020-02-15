#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0
 *
 */
int main(void)
{
long long a = 612852475143;
long b = 0;
int c;
while (a % 2 == 0)
{
b = 2;
a /= 2;
}
while (a != 1)
{
while (a % c == 0)
{
b = c;
a /= c;
}
c += 2;
}
printf("%li\n", b);
return (0);
}
