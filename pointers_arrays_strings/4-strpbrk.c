#include <stdio.h>
#include "main.h"
/**
 * _strpbrk -entry point
 *@s: a string to cheack
 *@accept: chars to check from
 * Return: Always 0
 *it does the thing
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (NULL);
}
