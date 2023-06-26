#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: function parameter
 *
 */

void puts2(char *str)
{
	int index = 0;

	while (*str != '\0')
	{
		if (index % 2 == 0)
			_putchar(*str);

		index++;
		str++;
	}
	_putchar('\n');
}
