#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc -entry point
 *@nmemb: numb of size array to allocate
 *@size: size of each bytes
 * Return: Always 0
 *it does the thing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *newarray;

if (nmemb == 0 || size == 0)
return (NULL);

newarray = malloc(nmemb * size);
if (newarray == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
newarray[i] = 0;

return ((void *)newarray);
}
