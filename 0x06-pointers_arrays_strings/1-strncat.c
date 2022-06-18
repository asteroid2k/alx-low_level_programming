#include "main.h"
#include <string.h>

/**
 * _strncat - concats most bytes
 * @dest: target string
 * @src: string to be appended
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	i = strlen(dest);

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}