#include <stdio.h>

/**
 * main - main function
 * Description: finds and prints the sum of the even-valued terms < 4,000,000
 * Return: 0
 */

int main(void)
{
	long int f1, f2, term, sum;

	f1 = 0;
	f2 = 1;
	term = 0;
	while (term <= 4000000)
	{
		term = f1 + f2;
		f1 = f2;
		f2 = term;
		if (term % 2 == 0)
		{
			sum += term;
		}
	}
	printf("%lu\n",sum);
	return (0);
}
