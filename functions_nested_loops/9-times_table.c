#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 */

void times_table(void)
{
	int row;
	int column;
	int multi;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');

		for (column = 1; column <= 9; column++)
		{
			multi = row * column;

			if (multi > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			}
		}
		_putchar('\n');
	}
}
