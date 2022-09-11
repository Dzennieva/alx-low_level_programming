#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
