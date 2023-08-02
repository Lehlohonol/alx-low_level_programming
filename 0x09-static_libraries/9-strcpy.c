/**
 * Prototype: _strcpy - copy two string
 * 
 * @dest: destination of the copy
 * @src:  source of the copy
 *
 * Return: a character array
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
