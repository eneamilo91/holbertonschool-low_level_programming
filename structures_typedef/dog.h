#ifndef HEADER_FILE_H
#define HEADER_FILE_H

/**
 * struct dog -dog data
 * @name: -points to specific data
 * @age: -points to specific data
 * @owner: -points to specific data
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
