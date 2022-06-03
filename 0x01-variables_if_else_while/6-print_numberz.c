#include <stdio.h>

/**
 * main - Write a program that prints all single numbers of base 10 from 0
 * new line and a putchar used
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
