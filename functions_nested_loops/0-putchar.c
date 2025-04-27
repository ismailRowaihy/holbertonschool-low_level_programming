#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main -entry point
 * Return: Always 0
 *it does the thing
 */
int main(void)
{

  char String[] = "_putchar";
  int i,len = strlen(String);
  for (i =0;i < len;i++)
    {
      _putchar(String[i]);
    }
  _putchar('\n');
return (0);
}
