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
 * *str_concat - function that concatanates two strings
 * @s1: a character
 * @s2: a character
 *
 * Return: NULL if failure or empty string else ar
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	ar = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (ar == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		ar[i] = s2[j];
		i++;
		j++;
	}
	ar[i] = '\0';

	return (ar);
}
