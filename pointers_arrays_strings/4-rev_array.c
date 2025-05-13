#include <stdio.h>
#include "main.h"
/**
 * reverse_array -entry point
 *@a: array of ints to reverse
 *@n: len of the array
 * Return: Always 0
 *it does the thing
 */
void reverse_array(int *a, int n)
{
int i, tmp;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}
}
