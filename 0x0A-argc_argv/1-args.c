#include <stdio.h>
/**
 * main-  is a funcion
 * @argc: is a variable
 * @argv: is a variable
 * Return: 0
 */


int main(int argc, char *argv[])
{
int a;
for (a = 0; a < argc; a++)
printf("%d\n", a);
(void)argv;
return (0);
}
