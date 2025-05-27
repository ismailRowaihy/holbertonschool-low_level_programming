#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - check the code
 *@n: num of args
 * Return: the sum of them all.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list TheList;
unsigned int i;
int sum = 0;

va_start(TheList, n);

if (n == 0)
return (0);

for (i = 0; i < n; i++)
sum += va_arg(TheList, int);

va_end(TheList);
return (sum);
}
