/**
 * Prototype: _strcmp - compare two strings
 * 
 * @s1: target string
 * @s2: source string
 *
 * Return: 0 if same , or the character diff if not the same
 */
int _strcmp(char *s1, char *s2)
{
	while (1)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
}
