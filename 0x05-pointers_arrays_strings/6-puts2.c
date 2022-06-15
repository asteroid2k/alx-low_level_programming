#include "main.h"
#include <stdio.h>

/**
 * puts2 - printcharacters
 * @str: string
 * Descrption: prints every other character of a string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
