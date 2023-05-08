#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * cp_file - function that creates a file
 * @file_from: absolute path to text file
 * @file_to: string to be written to file.
 *
 * Return: 1 on success
 */
int cp_file(const char *file_from, const char *file_to)
{
	if (file_from != NULL && file_to != NULL)
	{
		int fd_from, fd_to, w_count, fd_close, fd1_close, r_count;
		char buffer[1024];

		fd_from = open(file_from, O_RDONLY);
		if (fd_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		fd_to = open(file_to, O_RDONLY);
		if (fd_to == -1)
		{
			umask(0);
			fd_to = creat(file_to, 0664);
			while ((r_count = read(fd_from, buffer, 1024)) > 0)
			{
				w_count = write(fd_to, buffer, r_count);
				if (w_count != r_count)
				{
					dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
					exit(99);
				}
				memset(buffer, 0, 1024);
			}
			if (r_count < 0 || fd_to < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
				exit(99);
			}
		}
		else
		{
			fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC);
			while ((r_count = read(fd_from, buffer, 1024)) > 0)
			{
				w_count = write(fd_to, buffer, r_count);
				if (w_count != r_count)
				{
					dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
					exit(99);
				}
				memset(buffer, 0, 1024);
			}
			if (r_count < 0 || fd_to < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
				exit(99);
			}
		}
		fd_close = close(fd_from);
		if (fd_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_close);
			exit(100);
		}
		fd1_close = close(fd_to);
		if (fd1_close == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1_close);
			exit(100);
		}
		return (1);
	}
	else
		return (-1);
}

/**
 * main - call cp_file function
 * @argc: CLI argument count
 * @argv: array pointer of CLI arguments
 *
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	res = cp_file(argv[1], argv[2]);

	return (res);
}
