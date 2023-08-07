#include "main.h"

/**
 * create_file - creates a file
 * @filename: a character
 * @text_content: a character
 *
 * Return: 1 on succes  -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, writeFile;
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[lenght])
			lenght++;
		writeFile = write(file, text_content, lenght);
		if (writeFile < 0)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
