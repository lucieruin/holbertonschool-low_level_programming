#include "main.h"

/**
 * main - function multiplies two numbers
 * @argc: numbers of arguments
 * @argv: array
 *
 * Return: result of multiplication else Error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
