#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -entry point
 * @n: number to count from
 * Return: nothing
 *it does the thing
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
if (n == 98)
{
printf("%d\n", n);
}
else
{
printf("%d, ", n);
}
n++;
}
}
else
{
while (n >= 98)
{
if (n == 98)
{
printf("%d\n", n);
}
else
{
printf("%d, ", n);
}
n--;
}
}
}
