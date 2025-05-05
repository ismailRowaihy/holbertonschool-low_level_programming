#include <stdio.h>
#include "main.h"
/**
 * more_numbers -entry point
 * Return: Always 0
 *it does the thing
 */
void more_numbers(void)
{
int i, j;
char string[] = "01234567891011121314";
for (i = 0; i < 10; i++)
{
for (j = 0; string[j]; j++)
{
_putchar(string[j]);
}
_putchar('\n');
}
}
