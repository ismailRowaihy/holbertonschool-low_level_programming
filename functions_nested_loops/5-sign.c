#include <stdio.h>
#include "main.h"
/**
 * print_sign -entry point
 * @n: is an int that will be checked
 * Return: Always 0
 *it does the thing
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
