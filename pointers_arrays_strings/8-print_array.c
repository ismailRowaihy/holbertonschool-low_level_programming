#include <stdio.h>
#include "main.h"
/**
 *print_array -entry point
 *@a: an int pointer
 *@n: an int number of elements of the array to print
 * Return: Always 0
 *it does the thing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
