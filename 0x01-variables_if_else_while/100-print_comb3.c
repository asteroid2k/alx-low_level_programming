#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int firstDigit, lastDigit;

	while (i < 100)
	{
		firstDigit = i / 10;
		lastDigit = i % 10;
		if (lastDigit > firstDigit)
		{
		putchar(firstDigit + '0');
		putchar(lastDigit + '0');
		if (i < 89)
		{
		putchar(',');
		putchar(' ');
		}
		}
		i++;
	}
	putchar('\n');

	return (0);
}
