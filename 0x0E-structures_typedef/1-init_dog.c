#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  Initializes a variable of type struct dog
 *
 * @d: pointer to the dog
 * @name: name of the dog to be initialized
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;
	{
		(*d).name = name;
		d->owner = owner;
		d->age = age;
	}
}
