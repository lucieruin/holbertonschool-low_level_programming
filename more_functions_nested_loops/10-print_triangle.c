#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is a number
 *
 */

void print_triangle(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				if (col >= size - row - 1)
				{
					_putchar ('#');
				}
				else
				{
					_putchar (' ');
				}
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
