#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: points to name's dog
 * @age: points to age's dog
 * @owner:points to  owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int x = 0, y = 0, k;
	dog_t *doge;

	while (name[x] != '\0')
		x++;
	while (owner[y] != '\0')
		y++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = malloc(x * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= x; k++)
		doge->name[k] = name[k];
	doge->age = age;
	doge->owner = malloc(y * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= y; k++)
		doge->owner[k] = owner[k];
	return (doge);
}
