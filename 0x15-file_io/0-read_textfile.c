#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints to standard output
 * @filename : the name of the ile
 * @letters : number of letters read and printd
 * Return : the number of bytes that was read and printed
 * or 0 if the filename is NULL or function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t rd, wr;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * (letters));
if (buffer == NULL)
return (0);

rd = read(fd, buffer, letters);
wr = write(STDOUT_FILENO, buffer, rd);

close(fd);
free(buffer);
return (wr);
}
