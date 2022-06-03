#include <stdio.h>

/**
 * main - base 10 numbers
 * program that prints all single digit numbers of base 10 starting from 0
 * Return: 0 for now
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
