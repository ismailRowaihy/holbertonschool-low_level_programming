#include <stdio.h>
#include "main.h"
/**
 * _abs -entry point
 * @n: is an int that will be checked
 * Return: Always 0
 *it does the thing
 */
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else
{
return (n);
}
}
