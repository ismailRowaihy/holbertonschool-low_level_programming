#include <stdio.h>
#include "main.h"
/**
 * _strstr -entry point
 *@haystack: a haystack
 *@needle: a needle in haystck ?
 * Return: Always 0
 *it does the thing
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i]; i++)
{
for (j = 0; haystack[i + j] == needle[j]; j++)
;

if (!needle[j])
return (&haystack[i]);
}
return (NULL);
}
