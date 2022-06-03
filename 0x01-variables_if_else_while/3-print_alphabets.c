#include <stdio.h>
#include <ctype.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	for (i = 0; i < 26; i++)
	{

		putchar(toupper(alphabets[i]));
	}
	putchar('\n');

	return (0);
}
