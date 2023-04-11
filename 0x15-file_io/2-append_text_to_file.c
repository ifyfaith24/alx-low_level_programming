#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename : the name of the file
 * @text_content : content to add at the end of the line
 * Return : 1 on success and -1 on failliure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int wr;
int str;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY, O_APPEND);

if
(fd == -1)
return (-1);

if (text_content != NULL)
{
for
(str = 0; text_content[str];)
str++;

wr = write(fd, text_content, str);

if (wr == -1)
return (-1);
}
close(fd);
return (1);
}
