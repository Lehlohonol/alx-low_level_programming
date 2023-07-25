#include "main.h"

/**
 * create_array - create an array of a specific size and set the value to char
 * 
 * @size: the size of the array
 * @c: The target character
 * 
 * Return: the address if the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
