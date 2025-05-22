#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range -entry point
 *@min: the value from
 *@max: the value to
 * Return: Always 0
 *it does the thing
 */
int *array_range(int min, int max)
{
int i;
int *newarray;

if (min > max)
return (NULL);

newarray = malloc(sizeof(int) * (max - min + 1));
if (newarray == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
newarray[i] = min;

return (newarray);
}
