#include "main.h"

/**
 * *_strdup - returns a pointer to a new allocated space in memory
 * @str: a string
 *
 * Return: NULL if str or ar = NULL else return ar
 */

char *_strdup(char *str)
{
	char *ar;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ar = malloc((i + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	{
		ar[j] = str[j];
	}
	ar[j + 1] = 0;
	return (ar);
}
