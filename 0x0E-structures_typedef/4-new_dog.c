#include "dog.h"
#include <stdio.h>
/**
*new_dog - creates a new dog
*@name: name of dog, string
*@age: float
*@owner: owner of dog, stringi
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdg;

	newdg->name = name;
	newdg->age = age;
	newdg->owner = owner;

	return (newdg);

}
