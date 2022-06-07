
#include "main.h"

/**
 * print_sign - unction that prints the sign of a number
 * @n: number input
 * Description: prints the sign of a number
 * Return: Returns 1 and prints + if n is greater than zero,
 * Returns 0 and prints 0 if n is zero,
 * Returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
