#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the posix standard output
 * @filename: a character
 * @letters: len
 *
 * Return: writeFile
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, readFile, writeFile;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);

	buffer = malloc((letters) * sizeof(char));

	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	readFile = read(file, buffer, letters);
	if (readFile < 0)
	{
		free(buffer);
		close(file);
		return (0);
	}
	writeFile = write(STDOUT_FILENO, buffer, readFile);
	if (writeFile < 0 || writeFile != readFile)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	return (writeFile);
}
