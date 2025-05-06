#include <stdio.h>
#include "main.h"
/**
 * print_triangle -entry point
 * @n: int how many \ to print
 * Return: Always 0
 *it does the thing
 */
void print_triangle(int n)
{
int i, j, k;
for (i = 0; i < n ; i++)
{
for (j = n - 1; j > i ; j--)
{
_putchar(' ');
}
for (k = 0; k < i + 1; k++)
{
_putchar('#');
}
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
