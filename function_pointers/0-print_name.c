#include <stdio.h>

/**
 *print_name - entry point
 *@name: name to print
 *@f: pointer to function
 *return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
