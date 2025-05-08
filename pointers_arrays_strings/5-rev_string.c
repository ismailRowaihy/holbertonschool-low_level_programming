#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 *print_rev -entry point
 *@s: a char pointer
 * Return: Always 0
 *it does the thing
 */
void rev_string(char *s)
{
  int i = strlen(s), j;
 char *temp = malloc(i + 1);
 strcpy(temp , s);

 for(j=0;j<i;j++)
   {
     s[j] = temp[i-1-j];
     
   }

 free(temp);
}
