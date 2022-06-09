#include "main.h"

/**
 * print_line - draws a straight line
 * Description: draws a straight line with _, n times
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
