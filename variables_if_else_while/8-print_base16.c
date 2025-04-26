#include <stdio.h>
/**
 * main -entry point
 * Return: Always 0
 *it does the thing
 */
int main(void)
{
char i;
for (i = '0'; i <= '9' ; ++i)
{
putchar(i);
}
for (i = 'a'; i <= 'f' ; ++i)
{
putchar(i);
}
putchar('\n');
return (0);
}
