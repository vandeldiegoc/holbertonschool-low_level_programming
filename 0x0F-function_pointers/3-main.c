#include "3-calc.h"

/**
 * main -  is a funcion
 * @argc: is a variable
 * @argv: is a variable
 * Return: 0.
 */

int main(int argc, char *argv[])
{
int i, j;
int (*d)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
d = get_op_func(argv[2]);
if (d == NULL)
{
printf("Error\n");
exit(99);
}
i = atoi(argv[1]);
j = atoi(argv[3]);
printf("%d\n", d(i, j));
return (0);
}
