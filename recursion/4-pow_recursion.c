#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: a number
 * @y: a power
 *
 * Return: -1 if y < 0  0 if x = 0 1 if x = 1 or y = 0 else value of x *y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 0)
	{
		return (0);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
