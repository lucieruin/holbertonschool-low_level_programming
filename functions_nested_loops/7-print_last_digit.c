#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is a number
 * @Lastdigit: is n % 10
 *
 * Return: LastDigit
 */

int print_last_digit(int n)
{
	int LastDigit;

	LastDigit = n % 10;

	if (LastDigit < 0)
	{
		LastDigit = LastDigit * -1;
	}

	_putchar (LastDigit + '0');

	return (LastDigit);
}
