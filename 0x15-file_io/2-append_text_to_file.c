#include "holberton.h"

/**
 * append_text_to_file -  write text in a file
 * @filename: name of the file
 * @text_content: characters
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fb, c, num;
if (filename == NULL)
return (-1);

fb = open(filename, O_WRONLY | O_APPEND);
if (fb == -1)
return (-1);

if (text_content == NULL)
{
close(fb);
return (1);
}
for (num = 0; text_content[num]; num++)
;
c = write(fb, text_content, num);
if (c == -1)
return (-1);

close(fb);
return (1);
}

