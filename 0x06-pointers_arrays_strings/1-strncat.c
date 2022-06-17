/**
 * _strncat - a function that concatenates
 *
 * @dest: pointer to destinations
 * @src: pointer to source
 * @n: most number of bytes from @src
 *
 * Return: @dests
 */

char *_strncat(char *dests, char *src, int n)
{
	int c, j;

	c = 0;

	/*find size of dest array*/
	while (dests[c])
		c++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	 */
	for (j = 0; j < n && src[j] != '\0'; j++)
		dests[c + j] = src[j];
	/*null terminate destinations*/
	dests[c + j] = '\0';

	return (dests);
}
