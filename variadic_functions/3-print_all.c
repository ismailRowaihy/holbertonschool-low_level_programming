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

va_start(TheList, format);

while (format[i] != '\0')
{

if (format[i] == 'c')
{
holderC = va_arg(TheList, int);
printf("%c", holderC);
}
else if (format[i] == 'i')
{
holderI = va_arg(TheList, int);
printf("%d", holderI);
}
else if (format[i] == 'f')
{
holderF = va_arg(TheList, double);
printf("%f", holderF);
}

if (format[i] == 's')
{
holderS = va_arg(TheList, char*);
if (holderS == NULL)
{
printf("(nil)");
}
else
{
printf("%s", holderS);
}}

i++;
}
printf("\n");
va_end(TheList);
}
