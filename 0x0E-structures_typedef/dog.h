#ifndef DOG_H
#define DOG_H
/**
*struct dog - new type
*@name: name of dog, string
*@age: age of dog, float
*@owner: name of dog owner, string
*
*Description: Gives a brief on dog structure
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
