#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: pointer
 *
 * Return: void
 */
void print_dog(struct dog *d)
{

if (d)
{

printf("Name: %s\n"
"age: %f\n"
"owner: %s\n", d->name, d->age, d->owner);
}

else
{

d->name = "(nil)";
d->owner = "(nl)";
}

}
