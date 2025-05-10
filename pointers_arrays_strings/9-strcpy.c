#include <stdio.h>
#include "main.h"
/**
 * _strcpy -entry point
 *@src: a string to copy from
 *@dest: a string to copy to
 * Return: Always 0
 *it does the thing
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
