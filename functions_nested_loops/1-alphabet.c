#include <stdio.h>
#include "main.h"
/**
 * print_alphabet-entry point
 * Return: Always 0
 *it does the thing
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z' ; ++i)
{
_putchar(i);
}
_putchar('\n');
}
