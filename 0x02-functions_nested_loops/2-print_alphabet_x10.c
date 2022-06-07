#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabets
 * Description: prints all english alphabets 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char al;
	int i;

	for (i = 1; i <= 10; i++)
	{
		al = 'a';
		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
		_putchar('\n');
	}
}
