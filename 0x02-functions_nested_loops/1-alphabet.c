#include "main.h"

/**
 * print_alphabet - function that prints the alphabet 4rm main.h
 *
 * Return: 0 with ptint request
 */

void print_alphabet(void)
{
	char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
	_putchar(alphabets);
	}
	_putchar('\n');
}
