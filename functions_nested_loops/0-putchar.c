#include <stdio.h>
#include "main.h"
/**
 * main -entry point
 * Return: Always 0
 *it does the thing
 */
int main(void)
{
char String[] = "_putchar";
int i;
for (i = 0; String[i]; i++)
{
_putchar(String[i]);
}
_putchar('\n');
return (0);
}
