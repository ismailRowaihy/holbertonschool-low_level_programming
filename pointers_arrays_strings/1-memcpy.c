#include <stdio.h>
#include "main.h"
/**
 * _memcpy -entry point
 *@dest: a string to copy to
 *@src: the thing to copy from
 *@n: num of copys
 * Return: Always 0
 *it does the thing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n ; i++)
dest[i] = src[i];

return (dest);
}
