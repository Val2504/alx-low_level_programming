#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer used for allocation of space
 * @name: the first element of the data structure with char* type
 * @age: the second element of the data structure with float type
 * @owner: the third element of the data structure with char* type
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
