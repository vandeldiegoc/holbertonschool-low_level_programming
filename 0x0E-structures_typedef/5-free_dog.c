#include "dog.h"
/**
 * free_dog - Short description
 * @d: Third member
 *
 * Description: Longer description
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
free((*d).name);
free((*d).owner);
free(d);
}
