/**
 * _strncat - a function that concatenates
 *
 * @dest: pointer to destinations
 * @src: pointer to source
 * @n: most number of bytes from @src
 *
 * Return: @dests
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, j;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more memory
	 */
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[c + j] = src[j];
	/*null terminate destinations*/
	dest[c + j] = '\0';

	return (dest);
}
