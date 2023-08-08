#include "main.h"

/**
 * cpFile - copies source to destination
 * @sourceFile: source file
 * @destinationFile: destination file
 *
 * Return: int
 */

int cpFile(char *destinationFile, char *sourceFile)
{
	char *buffer[1024];
	int destFile, srcFile;
	int bRead, bWrite;
	int srcClose, destClose;

	srcFile = open(sourceFile, O_RDONLY);
	if (srcFile < 0)
		return (98);
	destFile = open(destinationFile, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destFile < 0)
		return (99);
	bRead = read(srcFile, buffer, 1024);
	if (bRead < 0)
		return (98);
	while (bRead > 0)
	{
		bWrite = write(destFile, buffer, bRead);
		if (bWrite < 0)
			return (99);
		bRead = read(srcFile, buffer, 1024);
		if (bRead < 0)
			return (98);
	}
	srcClose = close(srcFile);
	if (srcClose < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", srcFile);
		return (100);
	}
	destClose = close(destFile);
	if (destClose < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destFile);
		return (100);
	}
	return (0);
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int codeExit;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	codeExit = cpFile(argv[2], argv[1]);
	if (codeExit == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (codeExit == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (codeExit == 100)
	{
		exit(100);
	}
	else
	{
		return (0);
	}
}
