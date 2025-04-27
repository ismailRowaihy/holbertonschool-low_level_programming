#include <stdio.h>
#include "main.h"
/**
 * _isalpha -entry point
 * @c: is an int that will be checked
 * Return: Always 0
 *it does the thing
 */
int _isalpha(int c)
{
char i, j;
for (i = 'a'; i <= 'z'; ++i)
{
if (c == i)
{
return (1);
}
for (j = 'A'; j <= 'Z'; ++j)
{
if (c == j)
{
return (1);
}
}
}
return (0);
}
