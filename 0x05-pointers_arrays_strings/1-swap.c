#include <stdio.h>

/**
 * swap_int - swap numbers
 * Description: swaps the values of two integers
 * @a: int pointer
 * @b: int pointer
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
