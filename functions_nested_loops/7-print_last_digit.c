#include <stdio.h>
#include "main.h"
/**
 * print_last_digit -entry point
 * @n: is an int that will be checked
 * Return: Always 0
 *it does the thing
 */
int print_last_digit(int n)
{
n %= 10;
if (n < 0)
{
n *= -1;
}
_putchar('0' + n);
return (n);
}
