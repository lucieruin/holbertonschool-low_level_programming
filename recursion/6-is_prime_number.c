#include "main.h"

/**
 * _support - help function
 * @n: is a number
 * @div: is a divisor
 *
 * Return: 1 if n = div  0 if n % div = 0 else (_support(n, div +1))
 */

int _support(int n, int div)
{
	if (n == div)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (_support(n, div + 1));
}

/**
 * is_prime_number - returns 1 if the imput integer is a prime number
 * @n: number
 *
 * Return: 1 if is a prime number 0 if is not
 */

int is_prime_number(int n)
{
	int div = 3;

	if (n % 2 == 0 || n < 2)
		return (0);

	if (n == 2)
		return (1);
	return (_support(n, div));
}
