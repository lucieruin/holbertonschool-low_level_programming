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

/**
 * puts_half - prints second half of the string
 * @str: function parameter
 *
 */

void puts_half(char *str)
{
	int lenght = _strlen(str);
	int index =  (lenght + 1) / 2;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
