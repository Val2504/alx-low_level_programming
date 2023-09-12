#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - this is a data structure with three element
 * @name: first element with a char* type
 * @age: second element with a float type
 * @owner: third element with a char* type
 *
 * Description: this is a data structure with two char pointer which
 * is a string and a float data type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
