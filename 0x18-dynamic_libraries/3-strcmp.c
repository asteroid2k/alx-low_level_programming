#include "main.h"

/**
 * _strcmp - _strcmp function
 * Definition: compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
	}

	return (1);
}

