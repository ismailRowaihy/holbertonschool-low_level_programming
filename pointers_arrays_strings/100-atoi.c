#include <stdio.h>
#include "main.h"
/**
 * _atoi -entry point
 *@s: a string to check
 * Return: Always 0
 *it does the thing
 */
int _atoi(char *s)
{
int i, j = 0, check = 1, fn = 0;
for (i = 0; s[i]; i++)
{
if (s[i] == '-')
{
if (fn == 0)
check *= -1;
}
if (s[i] <= '9' && s[i] >= '0')
{
if (!fn)
fn++;
j *= 10;
j += s[i] - '0';
}
if (fn && s[i + 1] > '9' && s[i + 1] > '0')
break;
}
j *= check;
return (j);
}
