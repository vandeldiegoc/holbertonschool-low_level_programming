#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid -  is a funcion
 * @grid: is a variable
 * @height: is a variable
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int a;
for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
