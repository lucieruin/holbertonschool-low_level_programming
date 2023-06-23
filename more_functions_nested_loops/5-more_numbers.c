#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int count = 0;
	int num;

	while (count <= 9)
	{
		num = 0;
		while (num <= 14)
		{
			if (num >= 10)
			{
				_putchar ((num / 10) + '0');
			}
			_putchar ((num % 10) + '0');
			num++;
		}
		_putchar ('\n');
		count++;
	}
}
