#include "dog.h"

/**
*print_dog - print structure
*@d:dogs structure
*@name:dogs name
*@age:dogs age
*@owner:dogs owner
*/

void print_dog(struct dog *d)
{
if (d == NULL)
	return;
if (d->name == NULL)
	puts("Name: (nil)");
else
	printf("Name: %s\n", d->name);

printf("age: %f\n", d->age);
if (d->owner == NULL)
	puts("Owner: (nil)");
else
	printf("Owner: %s\n",d->owner);
}
