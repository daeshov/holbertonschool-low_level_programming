#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - makes a new struct dog
* @name: his/her name
* @age: how old is he
* @owner: who are you
* Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int cponame, cpoowner, i;
	dog_t *crdog;

	if (name == NULL || owner == NULL)
		return (NULL);
	crdog = malloc(sizeof(dog_t));
	if (crdog == NULL)
		return (NULL);
	for (cponame = 0; name[cponame]; cponame++)
		;

	cponame++;
	crdog->name = malloc(cponame * (sizeof(char)));
	if (crdog->name == NULL)
	{
		free(crdog);
		return (NULL);
	}
	for (i = 0; i < cponame; i++)
	crdog->name[i] = name[i];
	crdog->age = age;
	for (cpoowner = 0; owner[cpoowner]; cpoowner++)
		;
cpoowner++;
crdog->owner = malloc(cpoowner * (sizeof(char)));
if (crdog->owner == NULL)
{
	free(crdog->name);
	free(crdog);
	return (NULL);
}
for (i = 0; i < cpoowner; i++)
crdog->owner[i] = owner[i];
return (crdog);
}
