#include "dog.h"
/**
 * print_dog - Short description
 * @d: Third member
 *
 * Description: Longer description
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
else if ((*d).name == NULL)
(*d).name = "(nil)";
else if ((*d).owner == NULL)
(*d).owner = "(nil)";
printf("Name: %s\n", (*d).name);
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner);
}
