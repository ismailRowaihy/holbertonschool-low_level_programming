#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 *rev_string -entry point
 *@s: a char pointer
 * Return: Always 0
 *it does the thing
 */
void rev_string(char *s)
{
int i, j;
char tmp;
for (i = 0; s[i]; i++)
{
}
i--;
for (j = 0; j < i ; j++, i--)
{
tmp = s[j];
s[j] = s[i];
s[i] = tmp;
}
}
