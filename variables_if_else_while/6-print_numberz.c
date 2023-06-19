#include <stdio.h>

/**
 * main - us putchar for print all single digit number
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}
	putchar ('\n');

		return (0);
}
