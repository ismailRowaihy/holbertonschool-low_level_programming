#include <stdio.h>
#include "main.h"
/**
 *swap_int -entry point
 *@b: an int pointer
 *@a: an int pointer
 * Return: Always 0
 *it does the thing
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
