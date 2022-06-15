#include "main.h"
/**
 * _strcpy - copy string
 * @dest: string
 * @src: string
 * Description: copy contents of strin src into dest
 * Return: pointer containing copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
