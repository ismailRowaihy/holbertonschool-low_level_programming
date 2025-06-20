#include <stdio.h>

/**
 *array_iterator - entry point
 *@array: array to iterat on
 *@size: size of the array
 *@action: pointer to function
 *return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;

for (i = 0; i < size; i++)
action(array[i]);
}
