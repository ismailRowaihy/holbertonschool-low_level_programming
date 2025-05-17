#include <stdio.h>
#include "main.h"
/**
 * factorial -entry point
 *@n: a number of factorial
 * Return: Always 0
 *it does the thing
 */
int factorial(int n)
{
if (n < 0)
return (-1);

if (n <= 1)
return (1);

return (n * factorial(n - 1));
}
