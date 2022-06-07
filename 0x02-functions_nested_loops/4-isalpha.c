#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: character input
 * Description: checks if character is an alphabet
 * Return: Returns 1 if c is an alphabet, or 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
