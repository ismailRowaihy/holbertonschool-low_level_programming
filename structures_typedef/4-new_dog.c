#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - check the code
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i, nL, oL;
dog_t *newDog;

newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);

for (nL = 0; name[nL]; nL++)
;
for (oL = 0; owner[oL]; oL++)
;


newDog->name = malloc(nL + 1);
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
newDog->owner = malloc(oL + 1);
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
for (i = 0; name[i]; i++)
newDog->name[i] = name[i];

newDog->name[i] = name[i];

for (i = 0; owner[i]; i++)
newDog->owner[i] = owner[i];

newDog->owner[i] = owner[i];
newDog->age = age;
return (newDog);
}
