#include "main.h"
/**
 * _strspn - returns number of bytes in string
 * @s: string
 * @accept: acceptable bytes
 * Return: int number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int counter;

	while (*s)
	{
		for (counter = 0; accept[counter]; counter++)
		{
			if (*s == accept[counter])
			{
				n++;
				break;
			}
			else if (accept[counter + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}