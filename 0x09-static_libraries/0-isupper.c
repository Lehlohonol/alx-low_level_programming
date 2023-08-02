#include "main.h"

/**
 * Prototype: _isupper - checks if it the character is uppercase
 * @c: character to be evaluated
 *
 * Description: long description
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
