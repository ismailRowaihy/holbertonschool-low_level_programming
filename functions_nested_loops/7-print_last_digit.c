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
if (n < 0)
{
return (n * -1 % 10);
}
else
{
return (n % 10);
} 
}
