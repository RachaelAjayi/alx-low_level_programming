#include "main.h"

/**
 * append_text_to_file - function appends text at the end of file
 * @filename: name of the file
 * @text_content: NULL terminated string added to the end of file.
 *
 * Return: 1 on success. -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_file;
	int string_file;
	int rwr;

	if (!filename)
		return (-1);

	append_file = open(filename, O_WRONLY | O_APPEND);

	if (append_file == -1)
		return (-1);

	if (text_content)
	{
		for (string_file = 0; text_content[string_file]; string_file++)
			;

		rwr = write(append_file, text_content, string_file);

		if (rwr == -1)
			return (-1);
	}

	close(append_file);

	return (1);
}
