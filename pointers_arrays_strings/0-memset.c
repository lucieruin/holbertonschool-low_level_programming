#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: is a string
 * @b: value to be filled
 * @n: number of bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int size = n;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);
}

