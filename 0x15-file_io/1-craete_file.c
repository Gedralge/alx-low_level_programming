#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Apointer to the name of the file to create
 * @text_content: Apointer to a string to write to the file.
 *
 * Return: if the function fails -1.
 * otherwise  - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename, == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	0 = open(filename, 0_CREAT | 0_RDWR | O_TRUNC, 0600);
	w = write(o, text_conntent, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

