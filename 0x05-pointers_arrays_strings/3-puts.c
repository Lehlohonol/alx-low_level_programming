#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the string
 * folowed by a new line
 * @str:input
 * Return: Always 0
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');
}
