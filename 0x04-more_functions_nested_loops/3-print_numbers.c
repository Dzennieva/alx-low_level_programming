#include "main.h"

/**
 * print_numbers - Print numbers between 0 to 9
 *
 * Return: Void.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
