#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  *new_dog - new
  *@name: string of the name the dog
  *@age: number of age the dog
  *@owner: string of the owner the dog
  *Return: NULL, NULL, NULL, pointe with copie
  */

dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *p;
	int i = 0, j = 0;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(sizeof(name) + 1);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(sizeof(owner) + 1);
	if (p->owner == NULL)
	{
		free(p);
		free(p->name);
		return (NULL);
	}
	p->age = age;

	while (*(name + i))
	{
		p->name[i] = *(name + i);
		i++;
	}
	p->name = '\0';
	while (*(owner + j))
	{
		p->owner[j] = *(owner + j);
		j++;
	}
	p->owner = '\0';
	return (p);
}
