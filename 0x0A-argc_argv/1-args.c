
#include <stdio.h>
#include "main.h"

/**
 * main - print
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; 
	printf("%i\n", argc - 1);

	return (0);
}
