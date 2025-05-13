#include <stdio.h>
#include "main.h"
/**
 * cap_string -entry point
 *@str: string to check
 * Return: Always 0
 *it does the thing
 */
char *cap_string(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}')
{
str[i] = str[i] - 32;
}
}
}
return (str);
}
