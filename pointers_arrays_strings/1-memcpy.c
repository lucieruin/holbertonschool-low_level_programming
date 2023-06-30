#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination function
 * @src: copied function
 * @n: value of memory
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int size = n;

	if (size > 0)
	{
		while (i < size && src[i] != '\0')
		{
			src[i] = dest[i];
			i++;
		}
		while (i < size)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
