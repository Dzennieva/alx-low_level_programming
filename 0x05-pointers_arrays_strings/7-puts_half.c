#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = ((len - 1) / 2) + 1; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
