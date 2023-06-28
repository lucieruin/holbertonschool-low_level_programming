#include "main.h"

/**
 * rev_string - prints string and his reverse
 * @s: function parameter
 *
 */

void rev_string(char *s)
{
	int lenght = 0;
	int i;
	char *start, *end, temp;

	start = s;
	end = s;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	for (i = 0; i < lenght - 1; i++)
		end++;

	for (i = 0; i < lenght / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
