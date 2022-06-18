#include "main.h"

/**
 * rot13 - encode string into rot13
 * @s: string
 * Return: encoded string
 */

char *rot13(char *s)
{
	int k, i;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	k = 0;

	while (*(s + k) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + k) == alphabets[i])
			{
				*(s + k) = rot13[i];
				break;
			}
		}
		k++;
	}

	return (s);
}
