/**
 * Prototype: _strspn - gets the length of a substring
 * 
 * @s: main string
 * @accept: sub string
 *
 * Return: c
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, i, j, f;

	for (i = 0; s[i] != '\0'; i++)
	{
		f = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f = 1;
				break;
			}
		}
		if (f == 0)
			break;
		len++;

	}
	return (len);
}
