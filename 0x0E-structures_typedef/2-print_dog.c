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
	char *name = "(nil)";
	char isage = 0;
	char *owner = "(nil)";

	if (d)
	{
		if (d->name)
			name = d->name;
		if (d->age)
			isage = 1;
		if (d->owner)
			owner = d->owner;
	}
	
	printf("Name: %s\n", name);

	if (isage)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)");

	printf("Owner: %s\n", owner);
}
