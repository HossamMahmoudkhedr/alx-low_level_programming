#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - Create a file object
 *
 * @filename:  the name of the file
 * @text_content: the content of the file
 * Return: 1 on success, or -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
int file, length = 0, len = 0;
char *ptr;

if (filename == NULL)
{
return (-1);
}

file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

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
length = write(file, text_content, inlen);
}

if (close(file) == -1 || len != length)
{
return (-1);
}
return (1);
}
