#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * newline
 * Return: 0 alwaays return
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
