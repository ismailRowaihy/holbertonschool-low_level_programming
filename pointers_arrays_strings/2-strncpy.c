#include <stdio.h>
#include "main.h"
/**
 * _strncpy -entry point
 *@dest: a string to append to
 *@src: sring to copy
 *@n: num of char to copy
 * Return: Always 0
 *it does the thing
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i]; i++)
dest[i] = src[i];

while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
