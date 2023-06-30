#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: is a string
 * @c: is a character
 *
 * Return: &s[i] if s[i] == c else NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	{
		if (s[i] == c)
			return (&s[i]);
		else
			return (NULL);
	}
}
