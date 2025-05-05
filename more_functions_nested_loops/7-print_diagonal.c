#include <stdio.h>
#include "main.h"
/**
 * print_diagonal -entry point
 * @n: int how many \ to print
 * Return: Always 0
 *it does the thing
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if ( n <= 0 )
_putchar('\n');
}
