#include "main.h"

/**
 * Prototype: _memset - fills the memory address with constant byte
 * 
 * @s: memory to be filled
 * @b: constant byte
 * @n: number of byte
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
