#include <stdio.h>
#include "main.h"
/**
 * sqrt_helper -entry point
 *@n: num to find
 *@s: num to start searching
 * Return: Always 0
 *it does the thing
 */
int sqrt_helper(int n, int s)
{
if (s * s == n)
return (s);

if (s * s > n)
return (-1);

return (sqrt_helper(n, s + 1));
}
/**
 *_sqrt_recursion - entry point
 *@n: number to find its sqert
 * Return: the sqrt of n if found
 */
int _sqrt_recursion(int n)
{
return (sqrt_helper(n, 1));
}
