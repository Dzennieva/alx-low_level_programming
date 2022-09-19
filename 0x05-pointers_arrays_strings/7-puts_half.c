#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	j = len / 2;
	while (j <= len)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
