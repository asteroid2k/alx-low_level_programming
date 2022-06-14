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
	int i, j;
	char cp[20];

	strcpy(cp, s);
	i = strlen(s) - 1;
	j = 0;

	while (i >= 0)
	{
		s[j] = cp[i];
		i--;
		j++;
	}
}
