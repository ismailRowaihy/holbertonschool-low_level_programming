#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - check the code
 *@separator: to print between strings
 *@n: num of args
 * Return: the sum of them all.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list TheList;
unsigned int i;
char *holder;

va_start(TheList, n);

for (i = 1; i <= n; i++)
{
holder = va_arg(TheList, char*);

if (separator == NULL || i == n)
printf("%s", holder);
else if (holder == NULL)
printf("(nil)");
else
printf("%s%s", holder, separator);

}

printf("\n");
va_end(TheList);
}
