#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverse string
 * Description: prints a string, in reverse, followed by a new line
 * @s: string pointer
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i >= 0)
	{
		if (*(s + i) != '\0')
		{
		_putchar(*(s + i));
		}
		i--;
	}
	_putchar('\n');
}
