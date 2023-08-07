/**
* free_dog - free a dog struct
* @d: the dogs struct to free
*/

#include "dog.h"
void free_dog(dog_t *d)
{
    if (!d)
        return;
    free(d->owner);
    free(d->name);
    free(d);
}
