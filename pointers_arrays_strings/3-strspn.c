#include <stdio.h>
#include "main.h"
/**
 * _strspn -entry point
 *@s: a string to cheack
 *@accept: chars to check from
 * Return: Always 0
 *it does the thing
 */
unsigned int  _strspn(char *s, char *accept)
{
int i, j;
unsigned int count = 0;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
if (!accept[j])
break;

}
return (count);
}
