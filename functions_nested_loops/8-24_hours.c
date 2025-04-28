#include <stdio.h>
#include "main.h"
/**
 * jack_bauer -entry point
 * Return: Always 0
 *it does the thing
 */
void jack_bauer(void)
{
int i = 0, j = 0, k = 0, l = 0;

while (1)
{
putchar('0' + l);
putchar('0' + k);
putchar(':');
putchar('0' + j);
putchar('0' + i);
putchar('\n');
if (l == 2 && k == 3 && j == 5 && i == 9)
{
break;
}
i++;
if (i == 10)
{
i = 0;
j++;
if (j == 6)
{
j = 0;
k++;
if (k == 10)
{
k = 0;
l++;
}
}
}
}
}
