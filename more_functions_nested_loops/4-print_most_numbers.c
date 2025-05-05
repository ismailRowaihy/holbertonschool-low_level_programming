#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers -entry point
 * Return: Always 0
 *it does the thing
 */
void print_most_numbers(void)
{
char i;
for (i = '0'; i <= '9'; ++i)
{
if (i == '2' || i == '4')
continue;
_putchar(i);
}
_putchar('\n');
}
