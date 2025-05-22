#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code
 *@d: a dog to print its values
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
char *nameP, *ownerP;
if (d == NULL)
{
printf("(nil)");
return;
}
nameP = (d->name == NULL) ? "(nil)" : d->name;
ownerP = (d->owner == NULL) ? "(nil)" : d->owner;

printf("Name: %s\n", nameP);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", ownerP);

}
