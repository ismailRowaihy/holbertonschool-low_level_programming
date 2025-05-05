#include <stdio.h>
#include "main.h"
/**
 * _isupper -entry point
 * @c: is an int that will be checked
 * Return: Always 0
 *it does the thing
 */
int _isupper(int c)
{
char i;
for (i = 'A'; i < 'Z'; ++i)
{
if (c == i)
{
return (1);
}
}
return (0);
}
