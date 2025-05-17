#include <stdio.h>
#include "main.h"
/**
 * is_prime -entry point
 *@n: num to check
 *@i: cuttent div
 * Return: Always 0
 *it does the thing
 */
int is_prime(int n, int i)
{
if (i * i > n)
return (1);

if (n % i == 0)
return (0);

return (is_prime(n, i + 1));
}
/**
 *is_prime_number - entry point
 *@n: number to check
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);

return (is_prime(n, 2));
}
