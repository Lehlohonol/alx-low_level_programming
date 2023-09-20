#include "main.h"

/**
 * Prototype: flip_bits - function to count number of bits and flip
 * @n: number to be flipped
 * @m: number to be flipped to
 * Return: number of bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index = 0;
	unsigned long int b;

	b = n ^ m;
	while (b != 0)
	{
		if ((b & 1) == 1)
			index++;
		b = b >> 1;
	}
	return (index);
}
