#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 *append_text_to_file- appends text at the end of a file
 *@filename: name of the file to append to
 *@text_content: text contect to append at the end
 *
 *Return: 1 on success or -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{

int fd, writefile;
char *buffer;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
buffer = malloc(sizeof(strlen(text_content)));
if (buffer == NULL)
return (-1);

buffer = text_content;

writefile = write(fd, buffer, strlen(text_content));
if (writefile == -1)
return (-1);
}

close(fd);
return (1);
}
