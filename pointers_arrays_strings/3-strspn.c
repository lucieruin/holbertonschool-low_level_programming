#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to be scanned
 * @accept: string containig the characters to match
 *
 * Return: the number of character
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[i] == '\0')
			break;
		i++;
	}

	return (count);
}
