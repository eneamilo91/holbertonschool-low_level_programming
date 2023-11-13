#include<stdio.h>
#include"dog.h"
#include<stdlib.h>
#include<string.h>


/**
 * new_dog -entry point,function that creates a new dog
 * @name: -points to the respective value
 * @age: -holds value for output
 * @owner: -holds value for output
 * Return: (my_dog)
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = strdup(name);
	my_dog->age = age;
	my_dog->owner = strdup(owner);

	return (my_dog);

}
