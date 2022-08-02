#include "dog.h"
#include <stdlib.h>

/**
 * init_dog-function that initializes a variable of type struct dog
 * @d:struct tpe of pointer
 * @name:character type of pointer
 *@age:float type of number
 * @owner:character type of pointer
 * Return:0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
