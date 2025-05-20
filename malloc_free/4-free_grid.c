#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -entry point
 *@grid: 2d array grid
 *@height: height of the grid
 * Return: Always 0
 *it does the thing
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);

}
