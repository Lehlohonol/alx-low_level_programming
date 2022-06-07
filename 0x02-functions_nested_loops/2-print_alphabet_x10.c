#include "main.h"

/**
 * print_alphabet - Entry point fuction with out of repetation
 *
 * Return: void
 */

void void print_alphabet_x10(void)
{
	int x;
	char l;

	for (x = 0; x < 9; ++x)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
