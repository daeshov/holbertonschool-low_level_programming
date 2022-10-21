#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints all member info of a struct dog
 * @d: a variable of type struct dog
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	(d->name == NULL) ? printf("Name: (nil)\n")
		: printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	(d->owner == NULL) ? printf("owner: (nil)\n")
		: printf("owner: %s\n", d->owner);

}
