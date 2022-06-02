#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int integer;
	char character;
	long int longman;
	long long int longerman;
	float titanic;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longman));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longerman));
	printf("Size of a float: %lu byte(s)\n", sizeof(titanic));
	return (0);
}
