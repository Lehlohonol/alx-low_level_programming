#include "main.h"

/**
 * Prototype: get_endianness - function that checks endianness
 * @void: void
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int) *c);
}
