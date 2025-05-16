#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion -entry point
 *@s: a string to put
 * Return: Always 0
 *it does the thing
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
