#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion -entry point
 *@x: an int
 *@y: power to the int
 * Return: Always 0
 *it does the thing
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
