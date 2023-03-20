#include "dog.h"
#include <stdio.h>
/**
 * init_dog - dog with elemts
 * @d: struct point
 * @name: char point
 * @age: float age
 * @owner: owner point
 *
 * Description: inits var type
 * Return: nothing
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