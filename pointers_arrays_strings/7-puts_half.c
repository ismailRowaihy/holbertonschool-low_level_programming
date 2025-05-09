#include <stdio.h>
#include "main.h"
/**
 *puts_half -entry point
 *@s: a char pointer
 * Return: Always 0
 *it does the thing
 */
void puts_half(char *s)
{
int i, j;
for (i = 0; s[i]; i++)
{
}
if (i % 2 == 0)
{
i /= 2;
}
else
{
i = (i + 1) / 2;
}
for (j = i; s[j]; j++)
{
_putchar(s[j]);
}
_putchar('\n');
}
