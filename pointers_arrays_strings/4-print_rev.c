#include "main.h"
/**
 * _strlen - returns thr length of a string
 * @s: function parameter
 *
 * Return: c
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}

/**
 * print_rev - prints a string in reverse
 * @s: function parameter
 *
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
