#include "main.h"

/**
 * Prototype: _strstr - finds the first substring
 * 
 * @haystack: haystack
 * @needle: needle
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{

	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);
		haystack++;
	}
	return (NULL);
}
