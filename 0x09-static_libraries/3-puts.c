#include <unistd.h>

/**
 * Prototype: _puts - prints a string and then a new line
 * 
 * @str: the string variable
 *
 * Return: nothing
 */

void _puts(char *str)
{
	char newline = '\n';

	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, &newline, 1);
}
