#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int dig1, dig2, dig3;

	for (i = 0; i < 1000; i++)
	{
	dig1 = i / 100;
	dig2 = (i / 10) % 10;
	dig3 = i % 10;

	if (dig1 < dig2 && dig2 < dig3)
	{
		putchar(dig1 + '0');
		putchar(dig2 + '0');
		putchar(dig3 + '0');
		if (i < 700)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');

	return (0);
}
