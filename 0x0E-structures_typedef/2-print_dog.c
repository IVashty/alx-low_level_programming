#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog -function that prints a struct dog
 * @d:pointer to struct dog
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: ");
d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
printf("AGE: %f\n", d->age);
printf("Owner: ");
d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
}
}
