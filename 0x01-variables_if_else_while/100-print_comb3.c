#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10 && j < 10)
	{
		if (i == j || (i > 0 && j < i))
		{
			j++;
			continue;
		}
		putchar(i + '0');
		putchar(j + '0');
		j++;
		if (j > 9)
		{
			i++;
			j = 0;
		}
		if (i < 10 && j < 10)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
