#include <stdio.h>
#include <stdlib.h>
/**
 * main-  is a funcion
 * @argc: is a variable
 * @argv: is a variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
int a, j, sum = 0;
for (a = 1; a < argc; a++)
{
for (j = 0; argv[a][j]; j++)
{
if (argv[a][j] > '9' || argv[a][j] < '0')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[a]);
}
printf("%d\n", sum);
return (0);
}
