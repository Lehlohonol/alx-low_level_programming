#include "main.h"

/**
 * Prototype: _strlen - calculate the length of a string
 * 
 * @s: string variable
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s  != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
