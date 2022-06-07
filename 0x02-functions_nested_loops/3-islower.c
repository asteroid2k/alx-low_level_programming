#include "main.h"

/**
 * _islower - checks case of character
 * @c: character input
 * Description: checks for lowercase character
 * Return: Returns 1 if c is lowercase, or 0 otherwise
 */

int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
