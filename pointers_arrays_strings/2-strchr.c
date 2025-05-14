#include <stdio.h>
#include "main.h"
/**
 * _strchr -entry point
 *@s: a string to cheack
 *@c:char to look for
 * Return: Always 0
 *it does the thing
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i]; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (NULL);
}
