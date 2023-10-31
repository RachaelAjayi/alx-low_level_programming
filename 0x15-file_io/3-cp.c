#include "main.h"
#include <stdio.h>

/**
 * file_name - checks if files can be opened.
 * @file_from:copy from thid file
 * @file_to: copy to this file.
 * @argv: arguments vector.
 * Return: no return.
 */
void file_name(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies file content from the file.
 * @argc: number of arguments.
 * @argv: an array of pointers to the arguments vector.
 * Return: Always 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_name(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			file_name(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			file_name(0, -1, argv);
	}

	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
		}
	return (0);
}
