#include "main.h"

/**
 * string_toupper - Capitalize string
 * @c: string
 * Description: Change all lowercase letters to uppercase
 * Return: capitalized string
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
	return (c);
}
