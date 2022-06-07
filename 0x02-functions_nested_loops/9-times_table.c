#include "main.h"
/**
 * times_table - print 9 times table
 * Description: Prints out 9 times table in column and rows
 * Return: void
 */

void times_table(void)
{
	int y, x, val;

	val = 0;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			val = y * x;
			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (val >= 10)
			{
				_putchar((val / 10) + '0');
				_putchar((val % 10) + '0');
			}
			else if ((val < 10) & (x != 0))
			{
				_putchar(' ');
				_putchar((val % 10) + '0');
			}
			else
				_putchar((val % 10) + '0');
		}
		_putchar('\n');
	}
}
