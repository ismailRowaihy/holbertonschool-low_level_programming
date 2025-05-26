#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
int num1 = atoi(argv[1]), num2 = atoi(argv[3]);
int (*operation)(int,int) = get_op_func(argv[2]);

if (operation == NULL)
{
printf("Error\n");
exit(99);
}

if (argc != 4)
{
printf("Error\n");
exit(98);
}

printf("%d\n", operation(num1, num2));

return (0);  
}
