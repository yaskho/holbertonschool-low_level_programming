#include "dog.h"
/**
*newdog - creates a new dog
*@name: dogs name
*@age: dogs age
*@owner:dogs owner
*/

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;

    d = malloc(sizeof(dog_t));
	if (!d)
	    return (NULL);
    d->name = (char *) malloc(sizeof(char) * (strlen(name) + 1));
    if (d->name == NULL)
        return (NULL);
    d->owner = (char *) malloc(sizeof(char) * (strlen(owner) + 1));
     if (d->owner == NULL)
     {
        free(d->name);
        return (NULL);
     }
    strcpy(d->name, name);
    strcpy(d->owner, owner);
    d->age = age;
    return (d);
}
