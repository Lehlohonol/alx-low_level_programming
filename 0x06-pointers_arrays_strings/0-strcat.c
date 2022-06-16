/**
 * _strcat - function that concatenates
 *
 * @dest: pointer to destnation 
 * @src: pointer to source 
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c22;

	c = 0;

	while (dest[c])
		c++;

	
	for (c22 = 0; src[c22] ; c22++)
	
		dest[c++] = src[c22];

	return (dest);
}
