#include "main.h"

/**
 * swap_int - swaps of two integers
 * @a: function parameter
 * @b: function parameter
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
