#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: a string to scanned
 * @accept: a string
 *
 * Return: &s[i] else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
