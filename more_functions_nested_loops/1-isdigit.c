#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: is a character or a number
 *
 * Return: 1 if is a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
