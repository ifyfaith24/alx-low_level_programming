#include "main.h"

/**
 * read_textfile- function that reads a  text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read and printed
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t rd;
	ssize_t wr;
	char *buf;

	if (filename != NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);	
		buf = malloc(letters + 1);
		if (buf == NULL)
			return (0);
		buf[letters] = '\0';

		rd = read(fd, buf, letters);
		if (rd == -1)
			return (0);

		wr = write(STDOUT_FILENO, buf, rd);
		if (wr == -1)
			return (0);

		if (rd != wr)
			return (0);

		free(buf);
		close(fd);
		return (wr);
	}
	else
		return (0);

