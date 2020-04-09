#include "holberton.h"

/**
 *main- copy file
 * @argv: number of argument
 * @argc:: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
int file_from, file_to, rw = 1024, wr;
char buff[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}
file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
while (rw == 1024)
{
rw = read(file_from, buff, 1024);
wr = write(file_to, buff, rw);
}
if (rw == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}
if (wr == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
}
if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
}
return (0);
}
