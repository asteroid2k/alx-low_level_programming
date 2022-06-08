#include <stdio.h>

/**
 * main - main function
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	long int f1, f2, sum;

	f1 = 0;
	f2 = 1;
	for (i = 1; i <= 50; i++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		printf("%lu", sum);
		if (i < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
