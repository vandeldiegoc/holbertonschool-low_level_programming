 #include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
int c = 48;
while (c <= 57)
{
putchar(c);
if (c != 57)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
