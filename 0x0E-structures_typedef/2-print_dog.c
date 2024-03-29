#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog
 * @d: struct point
 *
 * Description: prints struct
 * Return: name of dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
