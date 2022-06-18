#include "main.h"
/**
 * _strcat - concats strings
 * @dest: target string
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (c = 0; src[c] != '\0'; c++)
		{
			dest[i] = src[c];
			i++;
		}
	}

	dest[i] = '\0';
	return (dest);
}
