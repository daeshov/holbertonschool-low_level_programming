#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include "dog.h"
/**
 * struct dog - structure with elements
 *@name: first element
 *@age: second element
 *@owner: third element
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
};

int main(void)
{
	typedef struct dog dog;
	return (0);
}
#endif
