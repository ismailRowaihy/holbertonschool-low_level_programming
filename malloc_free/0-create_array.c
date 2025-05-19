#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array -entry point
 *@size: size of the array
 *@c: the char to append
 * Return: Always 0
 *it does the thing
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *newAr;

if (size == 0)
return (NULL);

newAr = malloc(sizeof(char) * size + 1);
if (newAr == NULL)
return (NULL);

for (i = 0; i <= size; i++)
{
if (i == size)
{
newAr[i] = '\0';
}
else
{
newAr[i] = c;
}
}
return (newAr);
}
