#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion -entry point
 *@s: a string to rev
 * Return: Always 0
 *it does the thing
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
