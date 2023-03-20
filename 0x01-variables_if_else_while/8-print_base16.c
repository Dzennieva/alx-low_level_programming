#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess0
 */

int main(void)
{
	char c;
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
