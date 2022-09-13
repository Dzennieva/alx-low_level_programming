#include "main.h"

/**
 * _islower - lowercase character
 * @c: c is an ascii value
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
