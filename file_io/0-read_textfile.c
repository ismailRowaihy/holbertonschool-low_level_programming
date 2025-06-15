#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 *read_textfile- reads a file and prints it
 *@filename: name of the file to print
 *@letters: how many letters to print
 *
 *Return: the number of printed letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

int fd, readfile, count;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(letters);
if (buffer == NULL)
return (0);

readfile = read(fd, buffer, letters);

count = write(STDOUT_FILENO, buffer, readfile);
if (count == -1)
return (0);

close(fd);
return (count);
}
