#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the std_out
 * @filename: filename.
 * @letters: numbers of letters to be read or printed.
 *
 * Return: actual numbers of letters read or printed. If It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int read_text;
	ssize_t nrd, nwr;
	char *b;

	if (!filename)
		return (0);

	read_text = open(filename, O_RDONLY);

	if (read_text == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	nrd = read(read_text, b, letters);
	nwr = write(STDOUT_FILENO, b, nrd);

	close(read_text);

	free(b);

	return (nwr);
}
