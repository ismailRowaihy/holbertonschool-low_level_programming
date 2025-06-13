#include <unistd.h>
#include "main.h"

/**
 *set_bit - sets the value in a number binary value at index to 1
 *@n: num to check in binary
 *@index: the index to set
 *
 *Return: 1 if worked -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{

if (index > 64)
return (-1);

*n = *n | (1 << index);

return (1);
}
