#include "main.h"

/**
 * print_line - draws a straight line
 * @n: is a number
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int c;

		for (c = 0; c < n; c++)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}
}
