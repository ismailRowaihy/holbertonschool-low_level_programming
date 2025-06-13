#include <unistd.h>
#include "main.h"

/**
 *get_bit - getis the value in a number binary value at index
 *@n: num to check in binary
 *@index: the index to get
 *
 *Return: the binary at index
 */

int get_bit(unsigned long int n, unsigned int index)
{

if (index > 64)
return (-1);

return ((n >> index) & 1);
}
