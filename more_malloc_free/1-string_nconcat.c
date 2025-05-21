#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked -entry point
 *@b: size to allocate
 * Return: Always 0
 *it does the thing
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k, h;
char *newStr;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i]; i++)
;
for (j = 0; s2[j]; j++)
;
 
 if ( n >= j)
   n = j;
 
newStr = malloc(sizeof(char) * (i + n + 1));
if (newStr == NULL)
return (NULL);

 
for (k = 0; k < i ; k++)
{
newStr[k] = s1[k];
}
for (h = 0; h < n; k++, h++)
{
newStr[k] = s2[h];
}
newStr[k] = '\0'; 
return (newStr);
}
