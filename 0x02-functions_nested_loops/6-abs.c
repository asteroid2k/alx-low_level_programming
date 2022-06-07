
#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n: integer input
 * Description: computes the absolute value of an integer
 * Return: Returns 1 and prints + if n is greater than zero,
 * Returns 0 and prints 0 if n is zero,
 * Returns -1 and prints - if n is less than zero
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
