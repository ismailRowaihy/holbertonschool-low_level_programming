#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid -entry point
 *@width: width of the grid
 *@height: height of the grid
 * Return: Always 0
 *it does the thing
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **grid;

if (width == 0 || height == 0)
return (NULL);

grid = malloc(sizeof(int) * height);
if (grid == NULL)
return (NULL);

for (i = 0; i < height ; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
return (NULL);
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
