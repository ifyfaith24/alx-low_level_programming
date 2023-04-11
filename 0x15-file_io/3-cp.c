#include "main.h"
#include <stdio.h>
#include  <stdlib.h>

char *creat_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - assigns 1024 bytes for a buffer
 * @file : the buffer storing chars
 * Return : a pointer
 */

char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - closes file descriptor
 * @fd : The file descriptoe to b closed
 */

void close_file(int fd)
{
int i;

i = close(fd);

if (i == -1)
{
dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: Argument vector
 * Return: always 0
 * Desceiption: if the argument count is incorrect, exit code 97,
 * if file_from does not exist or cannot be read, exit cod 98,
 * if file_to cannot be created or written to, exit code 99,
 * if file_to or file_from cannot be closed, e3xit code 100.
 */

int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

w = write(to, buffer, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[2]);
free(buffer);
exit(99);
}

r = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);

free(buffer);
close_file(from);
close_file(to);

return (0);
}
