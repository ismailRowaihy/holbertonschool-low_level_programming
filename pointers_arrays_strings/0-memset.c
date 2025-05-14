#include <stdio.h>
#include "main.h"
/**
 * _memset -entry point
 *@s: a string to change
 *@b: the thing to change to
 *@n: num of copys
 * Return: Always 0
 *it does the thing
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n ; i++)
s[i] = b;

return (s);
}
