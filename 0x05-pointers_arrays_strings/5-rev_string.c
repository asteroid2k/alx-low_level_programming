#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse string
 * Description: reverses value of a string
 * @s: string pointer
 */
void rev_string(char *s)
{
	int i, len, middle;
	char tmp;

	len = strlen(s) - 1;
	i = 0;
	middle = len / 2;

	while (i < middle)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
		i++;
	}
}
