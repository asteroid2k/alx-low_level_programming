#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{

	int n;
	int lastDigit, lastAbs;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	lastAbs = abs(lastDigit);

	if (lastAbs == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if (lastAbs <= 5 && lastAbs >= 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	else if (lastAbs > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}

	return (0);
}
