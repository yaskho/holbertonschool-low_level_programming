#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>

/**
* struct dog - defines a struct holding
* dog description
* @name: dogs name
* @age: dogs age
* @owner: dogs owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);
#endif
