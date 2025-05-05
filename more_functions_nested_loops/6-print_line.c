#include <stdio.h>
#include "main.h"
/**
 * print_line -entry point
 * @n: int how many _ to print
 * Return: Always 0
 *it does the thing
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
