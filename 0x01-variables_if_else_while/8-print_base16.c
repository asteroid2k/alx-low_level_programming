#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i > 9)
		{
			char base = 'a';

			putchar(base + (i - 10));
			i++;
			continue;
		}
		putchar(i % 10 + '0');
		i++;
	}
	putchar('\n');

	return (0);
}
