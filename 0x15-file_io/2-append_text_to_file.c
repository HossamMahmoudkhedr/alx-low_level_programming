#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the name of the file
 * @text_content: the content to be added to the file
 * Return: 1 on success, or -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file;
ssize_t length = 0, len = 0;
char *ptr;

if (filename == NULL)
{
return (-1);
}

file = open(filename, O_WRONLY | O_APPEND);

if (file == -1)
{
return (-1);
}

if (text_content != NULL)
{
for (len = 0, ptr = text_content; *ptr; ptr++)
{
len++;
}
length = write(file, text_content, len);
}

if (close(file) == -1 || len != length)
{
return (-1);
}

return (1);
}
