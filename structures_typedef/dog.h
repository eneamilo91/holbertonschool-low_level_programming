#ifndef HEADER_FILE_H
#define HEADER_FILE_H

/**
 * struct dog -dog data
 * @name: -points to specific data
 * @age: -points to specific data
 * @owner: -points to specific data
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
