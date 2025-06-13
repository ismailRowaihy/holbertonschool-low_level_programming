#include <unistd.h>
#include "main.h"

/**
 *binary_to_uint - coverts a binary number to an unsigned int
 *@b: string to check
 *
 *Return: uint in binary
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int i, bi = 0;

for (i = 0; b[i]; i++)
{
if (b[i] == '0')
bi = (bi << 1);
else if (b[i] == '1')
bi = (bi << 1) | 1;
else
return (0);
}

return (bi);
}
