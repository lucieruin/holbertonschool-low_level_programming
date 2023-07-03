#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: a string
 *
 * Return: strlen(s + 1) + 1 or 0 ifv s == 0
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return  (0);
	}
	return (strlen(s + 1) + 1);
}
