#include <stdio.h>
#include "main.h"
/**
 *print_rev -entry point
 *@s: a char pointer
 * Return: Always 0
 *it does the thing
 */
void print_rev(char *s)
{
int i, j;
for (i = 0; s[i]; i++)
{
}
for (j = i - 1; s[j]; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
