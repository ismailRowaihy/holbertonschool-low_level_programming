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
int holderI;
float holderF;
char holderC;
char *separator = "";
va_start(TheList, format);
while (format[i] != '\0' && format != NULL)
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
holderC = va_arg(TheList, int);
printf("%c", holderC);
break;
case 'i':
holderI = va_arg(TheList, int);
printf("%d", holderI);
break;
case 'f':
holderF = va_arg(TheList, double);
printf("%f", holderF);
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
