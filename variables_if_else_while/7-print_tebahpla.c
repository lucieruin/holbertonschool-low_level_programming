#include <stdio.h>

/**
 * main - use command putchar that prints lowercase alphabet in reverse
 *
 * Return: always 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar (c);
	}
	putchar ('\n');

	return (0);
}
