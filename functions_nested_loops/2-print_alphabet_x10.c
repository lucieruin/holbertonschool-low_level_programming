#include "main.h"

/**
 * print_alphabet_x10 - use _putchar prints 10 times the alphabet in lowercase
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar ('\n');
	}
}
