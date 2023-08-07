
/**
*init_dog - initialise a dog struct
*@d: the struct
*@name: dogs name
*@age: dogs age
*@owner: dogs owner
*/

#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!(d))
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
