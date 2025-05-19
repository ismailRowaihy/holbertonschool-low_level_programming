#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -entry point
 *@str: sting to copy
 * Return: Always 0
 *it does the thing
 */
char *str_concat(char *s1, char *s2)
{
  int i, j, k, h;
char *newStr;

if (s1 == NULL || s2 == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
;
for (j = 0; s2[j]; j++)
;
 
newStr = malloc(sizeof(char) * (i + j + 1));
if (newStr == NULL)
return (NULL);

for (k = 0; k < i ; k++)
{
  newStr[k] = s1[k];
}
 for (h = 0;k <= (i + j);k++, h++)
   {
     if (k == (i + j))
       {
	 newStr[k] = '\0';
       }
       else
       {
	 newStr[k] =s2[h];
       }
   }

return (newStr);
}
