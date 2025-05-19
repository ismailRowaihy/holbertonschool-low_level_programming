#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -entry point
 *@str: sting to copy
 * Return: Always 0
 *it does the thing
 */
char *_strdup(char *str)
{
int i, j;
char *newStr;

if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
;
newStr = malloc(sizeof(char) * (i + 1));
if (newStr == NULL)
return (NULL);

for (j = 0; j <= i; j++)
{
if (j == i)
{
newStr[j] = '\0';
}
else
{
newStr[j] = str[j];
}
}

return (newStr);
}
