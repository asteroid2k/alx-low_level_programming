#include "main.h"
#include <stdio.h>

/**
 * _puts - print sstring
 * Description: prints a string, followed by a new line, to stdout
 * @str: string pointer
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
