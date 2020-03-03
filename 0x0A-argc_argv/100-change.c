#include <stdio.h>
#include <stdlib.h>
/**
 * main - arcg, *argv print the name of program
 * @argc: count parameters
 * @argv: array parameters
 * Return: return
 *
 */
int main(int argc, char *argv[])
{
int a = 0, b;

if (argc ==  1)
{
printf("Error\n");
return (1);
}
else if (argc > 1)
{
b = atoi(argv[1]);
if (b >= 25)
{
a += b / 25;
b %= 25;
}
if (b >= 10)
{
a += b / 10;
b %= 10;
}
if (b >= 5)
{
a += b / 5;
b %= 5;
}
if (b >= 2)
{
a += b / 2;
b %= 2;
}
if (b >= 1)
{
a += b / 1;
}
printf("%d\n", a);
}
return (0);
}
