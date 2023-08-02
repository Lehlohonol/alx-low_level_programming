/**
 * _strncat - concatenate two strings by bytes
 * 
 * @dest: destination to copy to
 * @src: source of copy
 * @n: number of bytes
 *
 * Return: returns a pointer to dest;
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	return (dest);
}
