#include "main.h"
/**
 * leet - encode string into 1337
 * @s: string
 * Return: encoded string
 */

char *leet(char *s)
{
	int counter, counter2;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	counter = 0;
	while (s[counter] != '\0')
	{
		counter2 = 0;
		while (counter2 < 10)
		{
			if (leetLetters[counter2] == s[counter])
			{
				s[counter] = leetNums[counter2];
			}
			counter2++;
		}
		counter++;
	}
	return (s);
}
