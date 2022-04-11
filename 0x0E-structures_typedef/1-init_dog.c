#include "dog.h"
#include <stdlib.h>
/**
 * init_dog- initializes variable of tyoe struct dog
 * @d: struct to initialize
 * @name: name
 * @age: dog name
 * @owner: dog's owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
