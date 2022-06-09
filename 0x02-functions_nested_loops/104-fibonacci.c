#include <stdio.h>

/**
 * main - main function
 * Description: prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long int f1, f2, term;
	int i;

	f1 = 0;
	f2 = 1;
	term = 0;

	for (i = 1; i <= 98; i++)
	{
		term = f1 + f2;
		f1 = f2;
		f2 = term;
		printf("%lu", term);
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
