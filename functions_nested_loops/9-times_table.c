#include <stdio.h>
#include "main.h"
/**
 * times_table -entry point
 * Return: Always 0
 *it does the thing
 */
void times_table(void)
{
int i, j, k, l, h;

for (i = 0; i <= 9; ++i)
{
for (j = 0; j <= 9; ++j)
{
k = i * j;
l = k % 10;
h = k / 10;
if (k > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + h);
_putchar('0' + l);
}
else
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('0' + k);
}
}
_putchar('\n');
}
}
