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
	int i, j, len;
	char tmp;

	len = strlen(s) - 1;
	i = 0;
	j = len;

	while (i <= j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
