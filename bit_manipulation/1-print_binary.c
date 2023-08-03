#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: a decimal
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	unsigned long int valueB;
	int index = 0;
	int bits = 0;

	while (temp >>= 1)
		bits++;

	for (index = bits; index >= 0; index--)
	{
		valueB = (n >> index) & 1;

		if (valueB == 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
