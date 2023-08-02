#include "main.h"

/**
 * Prototype: _isalpha - check of character is lower
 * 
 * @c: character argument to be checked
 * 
 * description: long description
 * 
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
