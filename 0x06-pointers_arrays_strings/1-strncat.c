/**
 * _strncat - a function
 *
 * @dests: pointer to destination
 * @src: pointer to source
 * @n: most number of bytes
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int i;

	c = 0;

	while (dests[c])
		c++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dests[c + j] = src[j];

	dests[c + j] = '\0';

	return (dests);
}
