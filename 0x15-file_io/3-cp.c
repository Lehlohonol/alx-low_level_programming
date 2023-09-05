#include "main.h"

void e_exit(int error, char *str, int fd);

/**
 * main(proto) - Entry point of the program
 *
 * @argc: Argument counts
 * @argv: Arguments array
 *
 * Return: 0 on sucessful
 */

int main(int argc, char *argv[])
{
	char *FILE_FROM, *FILE_TO, txt_buff[2] = "\0\0";
	int fd_fm, fd_ft;
	int read_status, write_status, close_status;

	if (argc != 3)
	{
		e_exit(97, "  ", 0);
	}
	FILE_FROM = argv[1];
	FILE_TO = argv[2];

	fd_fm = open(FILE_FROM, O_RDONLY);
	fd_ft = open(FILE_TO, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_fm == -1)
	{
		e_exit(98, FILE_FROM, fd_fm);
	}
	if (fd_ft == -1)
	{
		e_exit(99, FILE_TO, fd_ft);
	}

	while (1)
	{
		read_status = read(fd_fm, txt_buff, 1);

		if (read_status == -1)
			e_exit(98, FILE_FROM, fd_fm);
		if (read_status == 0)
			break;
		write_status = write(fd_ft, txt_buff, 1);
		if (write_status == -1)
			e_exit(99, FILE_TO, fd_ft);
	}
	close_status = close(fd_fm);
	if (close_status == -1)
		e_exit(100, NULL, fd_fm);
	close_status = close(fd_ft);
	if (close_status == -1)
		e_exit(100, NULL, fd_ft);

	return (0);
}

/**
 * e_exit - exit with an err messsge and an error code
 * @error: error code
 * @str: name of the file
 * @fd: file descriptor
 */

void e_exit(int error, char *str, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(error);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(error);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
		break;
	default:
		break;
	}
}
