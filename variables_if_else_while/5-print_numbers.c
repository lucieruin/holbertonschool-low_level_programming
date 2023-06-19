#include <stdio.h>

/**
 * main - use command putchar print all single digit
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}
	putchar ('\n');

	return (0);
}
