#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 *@d: a dog struct
 *@name: name to assagin
 *@age: age to assagin
 *@owner: owner to assagin
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
(*d).owner = owner;
}
