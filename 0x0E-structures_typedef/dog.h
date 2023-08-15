#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A new type describing a dog
 *
 * @name: name of the dog
 * @owner: name of the person owning the dog
 * @age: age of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
