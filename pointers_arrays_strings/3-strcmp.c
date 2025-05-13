#include <stdio.h>
#include "main.h"
/**
 * _strcmp -entry point
 *@s1: srting to cmp
 *@s2: string to cmp
 * Return: Always 0
 *it does the thing
 */
int _strcmp(char *s1, char *s2)
{
int i, j = 0;
for (i = 0; s1[i] && s2[i]; i++)
{
if (s1[i] != s2[i])
{
j = s1[i] - s2[i];
return (j);
}
}
return (j);
}
