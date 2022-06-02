#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
char qt[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int length = strlen(qt);
fwrite(qt, length, 1, stderr);
return (1);
}
