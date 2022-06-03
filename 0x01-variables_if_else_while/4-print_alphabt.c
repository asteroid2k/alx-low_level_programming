#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	char alpha;

	for (i = 0; i < 26; i++)
	{
		alpha = alphabets[i];
		if (alpha == 'q' || alpha == 'e')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
