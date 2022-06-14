#include <stdio.h>

/**
 * _strlen - find length of string
 * Description: returns the length of a string
 * @s: string pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
