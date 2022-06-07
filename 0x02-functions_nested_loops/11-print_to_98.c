#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: start integer
 * Description: prints all natural numbers from n to 98
 */

void print_to_98(int n)
{
	int count;

	if (n >= 98)
	{
		for (count = n; count >= 98; count--)
		{
			printf("%d", count);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (count = n; count <= 98; count++)
		{
			printf("%d", count);
			if (n != 98)
			{
				printf(", ");
			}

		}

	}
	printf("\n");
}
