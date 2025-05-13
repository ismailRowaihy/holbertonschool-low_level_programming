#include <stdio.h>
#include "main.h"
/**
 * leet -entry point
 *@str: string to check
 * Return: Always 0
 *it does the thing
 */
char *leet(char *str)
{
char *s = "aAeEoOtTlL";
char *n = "4433007711";
int i, j;
for (i = 0; str[i]; i++)
{
for (j = 0; s[j]; j++)
{
if (str[i] == s[j])
{
str[i] = n[j];
}
}
}
return (str);
}
