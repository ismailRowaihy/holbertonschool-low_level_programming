#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - check the code
 *@separator: to print between numbers
 *@n: num of args
 * Return: the sum of them all.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list TheList;
unsigned int i;
int holder;

va_start(TheList, n);

for (i = 1; i <= n; i++)
{
holder = va_arg(TheList, int);

if (separator == NULL || i == n)
printf("%d", holder);
else
printf("%d%s", holder, separator);

}

printf("\n");
va_end(TheList);
}
