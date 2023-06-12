#include "main.h"
/**
 * create_file -creates an array of chars, and initializes
 * @text_content: is a NULL terminated string to write
 * @filename: name of file
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int s, z, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = s; text_content[len];)
			len++;
	}

	s = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(o, text_content, len);

	if (s == -1 || z == -1)
		return (-1);

	close(s);

	return (1);
}
