#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - fres the memory allocated
 * @d: struct dog to free
 */

void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
