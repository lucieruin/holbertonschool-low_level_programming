#include <stdio.h>

/**
 * main - use command putchar
 *
 * Return: always 0
 */

int main(void)
{
	char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar (ch);
		}
		putchar ('\n');

		return (0);
}