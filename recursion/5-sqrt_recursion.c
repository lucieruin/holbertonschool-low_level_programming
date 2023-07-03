#include "main.h"

/**
 * _support - help function
 * @root: roof of the number
 * @nb: a number
 *
 * Return: -1 if root² > 0  0 if root² == 0  else _support(root, nb +1)
 */

int _support(int nb, int root)
{
	if ((root * root) > nb)
	{
		return (-1);
	}
	else if ((root * root) == nb)
	{
		return (root);
	}
	else
	{
		return (_support(nb, root + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number
 *
 * Return: -1 if n < 0 else _support(n, 0)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (_support(n, 0));
}
