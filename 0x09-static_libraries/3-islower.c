#include "main.h"

/**
 * Prototype_islower - check of character is lower
 * 
 * @c: character argument to be checked
 * 
 * description: long description
 * 
 * Return: 0
 */

int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	return (1);
}
