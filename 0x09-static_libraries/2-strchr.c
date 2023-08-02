#include "main.h"

/**
 * Prototype _strchr - check if character exist in a string
 * 
 * @s: string to be processed
 * @c: character to look for
 * 
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return ((s + i));
	}

	return (NULL);
}
