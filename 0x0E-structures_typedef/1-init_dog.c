#include "dog.h"
/**
 * init_dog - function that initialize a variable
 * @d: pointer
 * @name: pointer
 * @age: variable
 * @owner: pointer
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

d->name = name;
d->age = age;
d->owner = owner;

}