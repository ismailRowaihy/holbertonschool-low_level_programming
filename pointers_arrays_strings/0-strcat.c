#include <stdio.h>
#include "main.h"
/**
 * _strcat -entry point
 *@dest: a string to append to
 *@src: sring to copy
 * Return: Always 0
 *it does the thing
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i]; i++)
;
for (j = 0; src[j]; j++, i++)
dest[i] = src[j];
dest[i] = '\0';
return (dest);
}
