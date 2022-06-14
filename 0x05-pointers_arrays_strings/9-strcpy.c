#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string point by src
 * @src:sources
 * @dest:destinations
 * Return: pointer to destination.
 */

char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
