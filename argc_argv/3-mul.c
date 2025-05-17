#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point
 *@argc: arg counts
 *@argv: arg array of passed words
 * Return: Always 0
 *it does the thing
 */
int main(int argc, char *argv[])
{
  int i, t = 1;
 if (argc < 3)
   {
   printf("Error\n");
 return (1);
   }
for (i = 1; i < argc; i++)
{
  t *= atoi(argv[i]);
}
printf ("%d\n",t); 
return (0);
}
