/**
 * Prototype: _strcat - concatenate to strings
 *
 * _strcat - concatenate to strings
 * @dest: destination string
 * @src: src string
 *
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int c, j;

	for (c = 0; dest[c] != '\0'; c++)
		;

	for (j = 0; src[j] != '\0'; j++)
		dest[c + j] = src[j];
	dest[c + j] = '\0';

	return (dest);
}
