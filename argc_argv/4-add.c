#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -entry point
 *@argc: arg counts
 *@argv: arg array of passed words
 * Return: Always 0
 *it does the thing
 */
int main(int argc, char *argv[])
{
int i, j, t = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
t += atoi(argv[i]);
}
printf("%d\n", t);
return (0);
}
