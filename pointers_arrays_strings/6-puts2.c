#include <stdio.h>
#include "main.h"
/**
 *puts2 -entry point
 *@str: a char pointer
 * Return: Always 0
 *it does the thing
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
