#include "dog.h"
/**
*init_dog - initializes variable of struct dog
*@d: struct dog type
*@name: string
*@age: integer
*@owner: string
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
