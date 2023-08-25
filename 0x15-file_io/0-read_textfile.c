#include "main.h"

/**
 * Prototype:read_textfile - reads a text file and print
 *
 * @filename: a pointer to the file to be read.
 * @letters: number of letters it should read and print
 *
 * Return: 0 if fail / number of letters it read and printed otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *b;
	size_t r, w;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	/** open files **/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/** process opened file **/
	r = read(fd, b, letters);
	w = write(STDOUT_FILENO, b, r);

	/** close opened file **/
	close(fd);

	free(b);

	return (w);
}
