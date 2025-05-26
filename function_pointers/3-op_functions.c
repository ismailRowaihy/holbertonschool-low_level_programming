#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds a and b
 *@a: num to add
 *@b: num to add
 *Return: a + b
 */
int op_add(int a, int b) { return (a + b); }

/**
 * op_sub - sub b from a
 *@a: num to sub
 *@b: num to sub
 *Return: a - b
 */
int op_sub(int a, int b) { return (a - b); }

/**
 * op_mul - multiplys a * b
 *@a: num to mul
 *@b: num to mul
 *Return: a * b
 */
int op_mul(int a, int b) { return (a * b); }

/**
 * op_div - divides b from a
 *@a: num to dividend
 *@b: num to divisor
 *Return: a / b if b is not 0
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - modulo-remainder of div op
 *@a: num mod
 *@b: num mod
 *Return: a % b if b is not 0
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
