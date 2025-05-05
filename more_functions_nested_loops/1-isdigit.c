#include <stdio.h>
#include "main.h"
/**
 * _isdigit -entry point
 * @c: is an int that will be checked
 * Return: Always 0
 *it does the thing
 */
int _isdigit(int c)
{
char i;
for (i = '0'; i <= '9'; ++i)
{
if (c == i)
{
return (1);
}
}
return (0);
}
