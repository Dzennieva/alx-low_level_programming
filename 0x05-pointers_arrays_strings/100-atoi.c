#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: String
 *
 * Return: the converted int
 */

int _atoi(char *s)
{
	int s_num = 1;
	unsigned int us_num = 0;

	do {
		if (*s == '-')
			s_num *= -1;
		else if (*s >= '0' && *s <= '9')
			us_num = us_num * 10 + (*s - '0');
		else if (us_num > 0)
			break;
	} while (*s++);
	return (us_num * s_num);
}
