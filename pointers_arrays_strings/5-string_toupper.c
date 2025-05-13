#include <stdio.h>
#include "main.h"
/**
 * string_toupper -entry point
 *@str: string to check 
 * Return: Always 0
 *it does the thing
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
return (str);
}
