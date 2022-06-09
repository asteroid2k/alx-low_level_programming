#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times to print _
 * Description: draws a straight line with _, n times
 */

void print_line(int n)
{
	int i = 0;

	if (n < 1)
	{
		_putchar('\n');
	}
	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
