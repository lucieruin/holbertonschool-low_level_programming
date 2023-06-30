#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: matrix
 * @size: size of matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int first_diag = 0;
	int second_diag = 0;
	int i;
	int row = 0;

	while (row < size)
	{
		i = (row * size) + row;
		first_diag += a[i];
		row++;
	}

	row = 1;
	while (row <= size)
	{
		i = (row * size) - row;
		second_diag += a[i];
		row++;
	}
	printf("%d, %d\n", first_diag, second_diag);
}
