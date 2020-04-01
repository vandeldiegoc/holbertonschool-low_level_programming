#include "holberton.h"

/**
 * read_textfile - read a text in a file
 * @filename: name of the file
 * @letters: limit of characters
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, w;
int num;
char *buff;
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
num = read(fd, buff, letters);
{
if (num == -1)
return (0);
}
w = write(STDOUT_FILENO, buff, num);
free(buff);
close(fd);
return (w);
}
