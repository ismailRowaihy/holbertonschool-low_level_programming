#include <stdio.h>
#include "main.h"
/**
 * print_diagsums -entry point
 *@a: nested list to check
 *@size: size of the list
 * Return: Always 0
 *it does the thing
 */
void print_diagsums(int *a, int size)
{
int i, t1 = 0, t2 = 0;
for (i = 0; i < size; i++)
{
t1 += a[i * size + i];
t2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", t1, t2);
}
