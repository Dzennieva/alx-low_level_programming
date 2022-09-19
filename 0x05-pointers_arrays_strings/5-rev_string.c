#include "main.h"
/**
 * rev_string - reverses a string
 * @s: String
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, count = 0;
	char *begin, *end, temp;

	while (s[count] != '\0')
		count++;
	begin = s;
	end = s;
	for (i = 0; i < count - 1; i++)
		end++;
	for (j = 0; j < count / 2; j++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
