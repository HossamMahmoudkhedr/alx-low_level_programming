#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: the file name
 * @letters: number of characters to read
 * Return: number of letter read or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
int length, chars;
char *buffer;

if (filename == NULL || letters == 0)
{
return (0);
}

buffer = malloc(sizeof(char) * letters);

if (buffer == NULL)
{
return (0);
}

file = open(filename, O_RDONLY);
if (file == -1)
{
free(buffer);
return (0);
}

length = read(file, buffer, letters);

if (length == -1)
{
free(buffer);
close(file);
return (0);
}

chars = write(STDOUT_FILENO, buffer, length);

free(buffer);
close(file);

if (chars != length)
{
return (0);
}

return (length);
}
