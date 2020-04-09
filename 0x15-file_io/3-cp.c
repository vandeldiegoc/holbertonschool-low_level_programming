#include "holberton.h"

/**
 *main- copy file
 * @argv: number of argument
 * @argc:: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
int file_from, file_to, rw, wr = 0;
char buff[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO,  "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to1 %s\n", argv[2]);
exit(99);
}
while ((rw = read(file_from, buff, 1024)))
{

wr =  write(file_to, buff, rw);
if (wr == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to3 %s\n", argv[2]);
exit(99);
}
}
if (close(file_to))
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
if (close(file_from))
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
return (0);
}
