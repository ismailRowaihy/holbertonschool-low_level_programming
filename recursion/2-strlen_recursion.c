#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion -entry point
 *@s: a string to count
 * Return: Always 0
 *it does the thing
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}
