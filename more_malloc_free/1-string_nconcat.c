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
 * *string_nconcat - concatenates two strings
 * @s1: a string
 * @s2: a string
 * @n: number of bytes
 *
 * Return: ar to concatenates string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	int len, num;
	char *ar;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	len = (_strlen(s1) + num + 1);
	ar = malloc(sizeof(*ar) * len);

	if (ar == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ar[i] = s1[i];
	for (j = 0; j < num; j++)
		ar[i + j] = s2[j];
	ar[i + j] = '\0';
	return (ar);
}

