#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: function parameter
 *
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	row = col = 0;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
