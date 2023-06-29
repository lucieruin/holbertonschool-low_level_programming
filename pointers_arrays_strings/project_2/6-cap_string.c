#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: is a string
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i;
	int n;
	char str[] = " ,;.!?\"(){}\t\n";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] = s[i] - 32;
			}
			else
			{
				for (n = 0; str[n] != '\0'; n++)
				{
					if (s[i - 1] == str[n])
					{
						s[i] = s[i] - 32;
					}
				}
			}
		}
	}
	return (s);
}
