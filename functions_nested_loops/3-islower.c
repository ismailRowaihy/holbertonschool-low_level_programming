#include <stdio.h>
#include "main.h"
/**
 * _islower -entry point
 * @c: is an int that will be checked
 * Return: Always 0
 *it does the thing
 */
int _islower(int c)
{
char i;
for (i = 'a'; i < 'z'; ++i)
{
if (c == i)
{
return (1);
}
}
return (0);
}
