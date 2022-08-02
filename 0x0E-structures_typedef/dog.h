#ifndef DOG_H
#define DEFINE_H

/**
 * struct dog - structure definition of a dog.
 * @name:character string
 * @age:integer
 * @owner:character string
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t-typedef for struct dog
 */

typedef struct dog dog_t;


#endif
