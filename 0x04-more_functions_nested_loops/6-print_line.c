#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times to print _
 * Description: draws a straight line with _, n times
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
