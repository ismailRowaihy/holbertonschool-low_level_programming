#include <stdio.h>
#include "main.h"
/**
 * print_chessboard -entry point
 *@a: nested list to print
 * Return: Always 0
 *it does the thing
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
