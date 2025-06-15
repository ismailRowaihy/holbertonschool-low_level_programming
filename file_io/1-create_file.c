#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 *create_file- creates a file with text content
 *@filename: name of the file to create
 *@text_content: text to wrrite in the file
 *
 *Return: 1 on success or -1 if failed
 */

int create_file(const char *filename, char *text_content)
{

int fd, writefile;
char *buffer;

if (filename == NULL)
return (-1);

fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

buffer = malloc(sizeof(strlen(text_content)));
if (buffer == NULL)
return (-1);

buffer = text_content;

writefile = write(fd, buffer, strlen(text_content));
if (writefile == -1)
return (-1);

close(fd);
return (1);
}
