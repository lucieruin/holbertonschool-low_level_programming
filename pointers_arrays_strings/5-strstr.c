#include "main.h"

/**
 * _strstr - locates a ubstring
 * @haystack: string
 * @needle: string
 *
 * Return: &haystack[i] else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i]; i++)
	{
		int a = i;

		for (j = 0; needle[j]; j++)
		{
			if (needle[j] != haystack[a])
				break;

			else
				a++;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
