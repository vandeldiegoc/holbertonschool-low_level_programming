#include "holberton.h"

/**
 * create_file - create a file and write text in
 * @filename: name of the file
 * @text_content: limit of characters
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fb, c, num;
fb = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fb == -1)
		return (-1);

	for (num = 1; text_content[num] != 0; num++)
		;
	c = write(fb, text_content, num);
		if (c == -1)
			return (-1);

	close(fb);
	return (1);
}
