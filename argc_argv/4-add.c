#include "main.h"

/**
 * main - function that adds positive numbers
 * @argc: number of arguments
 * @argv: array
 *
 * Return: result or 0 if no number is passed or 1 if numbers contains symbols
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
