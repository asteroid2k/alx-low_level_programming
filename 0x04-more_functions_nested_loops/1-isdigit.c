#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: character input
 * Description: checks if input is a digit
 * Return: Returns 1 if c is a digit, or 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
