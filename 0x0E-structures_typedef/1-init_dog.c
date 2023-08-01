#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that initiali a variable of type struct dog
 * @d: pointer
 * @name: character
 * @age: float always
 * @owner: character
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
