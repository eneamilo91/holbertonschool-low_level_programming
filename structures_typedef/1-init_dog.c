#include<stdio.h>
#include"dog.h"

/**
 * init_dog -entry point,initializes a variable
 * @d: -points to specific memory
 * @name: -holds value for output
 * @age: -holds value for output
 * @owner: -holds value for output
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
