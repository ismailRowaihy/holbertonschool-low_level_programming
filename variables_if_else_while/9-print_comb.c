#include <stdio.h>
/**
 * main -entry point
 * Return: Always 0
 *it does the thing
 */
int main(void)
{
int i, a;
for (i = 48 ; i <= 57 ; ++i)
{
putchar(i);
if (i != '9')
{
for (a = 0 ; a < 1 ; ++a)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
