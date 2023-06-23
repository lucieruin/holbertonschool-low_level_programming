#include "main.h"

/**
 * print_square - prints a square
 * @size: is a number
 *
 */

void print_square(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		for (col = 1; col <= size; col++)
		{
			for (row = 1; row <= size; row++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}

