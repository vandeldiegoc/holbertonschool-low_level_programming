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
int a, multi;
for (a = 0; a < argc; a++)
{
multi = atoi(argv[1]) * atoi(argv[2]);
}
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", multi);
return (0);
}
