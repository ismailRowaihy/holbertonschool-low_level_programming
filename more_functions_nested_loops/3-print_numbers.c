#include <stdio.h>
#include "main.h"
/**
 * print_numbers -entry point
 * Return: Always 0
 *it does the thing
 */
void print_numbers(void)
{
char i;
for (i = '0'; i <= '9'; ++i)
{
_putchar(i);
}
_putchar('\n');
}
