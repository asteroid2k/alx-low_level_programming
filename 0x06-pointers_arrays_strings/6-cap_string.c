#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i, c;
	int flag;
	char stop_words[] = ",;.!?(){}\n\t\" ";

	for (i = 0, flag = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			flag = 1;
		for (c = 0; stop_words[c] != '\0'; c++)
		{
			if (stop_words[c] == str[i])
				flag = 1;
		}

		if (flag)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				flag = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				flag = 0;
			else if (str[i] > 47 && str[i] < 58)
				flag = 0;
		}
	}
	return (str);
}
