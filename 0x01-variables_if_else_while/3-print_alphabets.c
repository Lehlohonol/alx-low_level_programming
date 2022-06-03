#include <stdio.h>

/**
 * main - alphabets in a game upper and lowercase
 * new line followed
 * Return: 0 as a return
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
