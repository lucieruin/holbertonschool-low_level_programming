#include <stdio.h>

/**
 * main - use putchar print alphabet lowercase without q and e
 *
 * Return: always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar (ch);
	}
	putchar ('\n');

	return (0);
}
