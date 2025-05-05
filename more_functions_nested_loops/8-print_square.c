#include <stdio.h>
#include "main.h"
/**
 * print_square -entry point
 * @n: int how many \ to print
 * Return: Always 0
 *it does the thing
 */
void print_square(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
