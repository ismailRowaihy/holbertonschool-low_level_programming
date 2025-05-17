#include <stdio.h>
/**
 * main -entry point
 *@argc: arg counts
 *@argv: arg array of passed words
 * Return: Always 0
 *it does the thing
 */
int main(int argc, char *argv[])
{
  int i;
  for (i = 0;i < argc;i++)
    {
      printf("%s\n",argv[i]);
    }
  return (0);
}
