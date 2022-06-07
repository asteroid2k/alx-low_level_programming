
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: integer input
 * Description: prints the last digit of a number
 * Return: Returns value of the last digit
 */

int print_last_digit(int n)
{
	int last;

	last = abs(n) % 10;
	_putchar(last + '0');
	return (last);
}
