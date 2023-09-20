#include <unistd.h>

/**
 * prototype: _putchar - write out characters to the outpit stream
 * @c: character
 * Return: 1 if successful , -1 one if failed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
