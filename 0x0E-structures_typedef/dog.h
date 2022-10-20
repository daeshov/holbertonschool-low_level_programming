#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include "dog.h"
int _putchar(char c);
/**
 * struct dog - structure with elements
 *@name: first element
 *@age: second element
 *@owner: third element
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
#endif
