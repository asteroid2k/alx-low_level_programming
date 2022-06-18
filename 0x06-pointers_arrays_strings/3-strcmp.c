#include "main.h"

/**
 * _strcmp - Compare strings
 * @s1: string
 * @s2: string
 * Return: s1 < s2 ? negative int : 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
