#include "main.h"

/**
 * Prototype: _strpbrk - locates first occurence of a byte
 *
 * @s: target string
 * @accept: char to look for
 * 
 * Return: address if the target character or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != 0)
		{
			if (*(s + i) == *(accept + j))
			{
				return ((s + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
