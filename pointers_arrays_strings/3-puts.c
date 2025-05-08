#include <stdio.h>
#include "main.h"
/**
 *_puts -entry point
 *@str: a char pointer
 * Return: Always 0
 *it does the thing
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
