#include <unistd.h>
#include "main.h"

/**
 *flip_bits - flips bits to get from one number to anoter
 *@n: a number
 *@m: 2nd number to flip to
 *
 *Return: count of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int check;
int count = 0;

check = n ^ m;
while (check)
{
count += check & 1;
check >>= 1;
}

return (count);
}
