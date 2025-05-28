#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - check the code
 *@format: the format to check
 * Return: nothing.
 */
void print_all(const char *const format, ...)
{
va_list TheList;
unsigned int i = 0;
char *holderS;
char *separator = "";
va_start(TheList, format);
while (format != NULL && format[i] != '\0')
{
if (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's')
{
printf("%s", separator);
separator = ", ";
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(TheList, int));
break;
case 'i':
printf("%d", va_arg(TheList, int));
break;
case 'f':
printf("%f", va_arg(TheList, double));
break;
case 's':
holderS = va_arg(TheList, char *);
if (holderS == NULL)
{
printf("(nil)");
break;
}
printf("%s", holderS);
break;
}
i++;
}
printf("\n");
va_end(TheList);
}
