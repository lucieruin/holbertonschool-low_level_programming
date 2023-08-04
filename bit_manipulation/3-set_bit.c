#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: an integer
 * @index: the bit to change
 *
 * Return: -1 if failled or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = (1 << index) | *n;
	return (1);
}
