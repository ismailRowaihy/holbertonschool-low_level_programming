#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked -entry point
 *@b: size to allocate
 * Return: Always 0
 *it does the thing
 */
void *malloc_checked(unsigned int b)
{

void *p = malloc(b);
if (p == NULL)
exit(98);

return (p);
}
