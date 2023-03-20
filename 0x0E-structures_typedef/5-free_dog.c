#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: dog pointer
 *
 * Description: sets dogs free
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
