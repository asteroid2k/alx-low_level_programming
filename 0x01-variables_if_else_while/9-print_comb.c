#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num == 9)
		{
			putchar(num % 10 + '0');
			break;
		}
		putchar(num % 10 + '0');
		putchar(',');
		putchar(' ');
		num++;
	}

	return (0);
}
