#include <stdio.h>
#include "main.h"
/**
 * _strncat -entry point
 *@dest: a string to append to
 *@src: sring to copy
 *@n: num of char to copy
 * Return: Always 0
 *it does the thing
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i]; i++)
;
for (j = 0; j < n && src[j]; j++, i++)
dest[i] = src[j];
dest[i] = '\0';
return (dest);
}
