#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to print _
 * Description: draws a diagonal line with \, n times
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;


	for (i = 0; i < n; i++)
	{
		j = 0;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
