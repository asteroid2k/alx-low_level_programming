#include "main.h"

/**
 * print_square - draws a square
 * @size: length of square
 * Description: draws a square of length size
 */

void print_square(int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		j = 0;
		for (j = 0; j < size; j++)
		{
			_putchar('#');		
		}
		if (i < size - 1)
		{
		_putchar('\n');
		}
	}
	_putchar('\n');
	
}
