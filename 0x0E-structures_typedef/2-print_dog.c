#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: struct dog type
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: nil\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("nil");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("nil\n");
	}
}
