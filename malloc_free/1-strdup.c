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
 * *_strcpy - copies the string pointed to by src
 * @dest: destination function
 * @src: copied function
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *_strdup - returns a pointer to a new allocated space in memory
 * @str: a string
 *
 * Return: NULL if str or ar = NULL else return ar
 */

char *_strdup(char *str)
{
	char *ar;

	if (str == NULL)
		return (NULL);

	ar = malloc(_strlen(str) + 1);

	if (ar == NULL)
		return (NULL);

	_strcpy(ar, str);

	return (ar);
}
