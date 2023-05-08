#include "main.h"

/**
 * append_text_to_file - function appends text to a file
 * @filename: name of file to be appended
 * @text_content: string to add at the end of the file
 * Return: 1 on success or -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, i);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
