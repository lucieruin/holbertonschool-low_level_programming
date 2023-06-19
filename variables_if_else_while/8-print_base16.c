#include <stdio.h>

/**
 * main - use putchar that prints all numbers of base 16
 *
 * Return: always 0
 */

int main(void)
{
	int n = '0';
	char c = 'a';

	while (n <= '9')
	{
		putchar (n);
		n++;
	}
	while (c <= 'f')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');

	return (0);
}
