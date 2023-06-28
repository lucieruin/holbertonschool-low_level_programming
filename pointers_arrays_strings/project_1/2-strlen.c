#include "main.h"

/**
 * _strlen - returns thr length of a string
 * @s: function parameter
 *
 * Return: count
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}
