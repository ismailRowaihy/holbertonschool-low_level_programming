#include <stdio.h>

/**
 * int_index - entry point
 *@array: array to iterat on
 *@size: size of the array
 *@cmp: pointer to function
 *Return: the index if found , -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 ||array == NULL ||cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}

return (-1);
}
