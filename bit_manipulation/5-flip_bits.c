#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: an integer
 * @m: an integer
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, index;

	for (index = count = 0; index < 64; index++, count++)
		if (((n >> index) & 1) == ((m >> index) & 1))
			count--;
	return (count);
}
