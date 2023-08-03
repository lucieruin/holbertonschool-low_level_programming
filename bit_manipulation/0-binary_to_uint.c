#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b : character
 *
 * Return: 0 for 0, 1 for 1 and NULL if not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int index = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		else if (b[index] == '0')
			result = (result << 1);

		else if (b[index] == '1')
			result = (result << 1) | 1;
		index++;
	}
	return (result);
}
