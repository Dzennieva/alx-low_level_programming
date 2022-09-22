#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: string
 *
 * Return: String
 */

char *cap_string(char *s)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = i - 1;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - 32;
			else if (s[n] >= 9 && s[n] <= 10)
				s[i] = s[i] - 32;
			else if (s[n] >= 32 && s[n] <= 34)
				s[i] = s[i] - 32;
			else if (s[n] >= 40 && s[n] <= 41)
				s[i] = s[i] - 32;
			else if (s[n] == 46)
				s[i] = s[i] - 32;
			else if (s[n] == 59)
				s[i] = s[i] - 32;
			else if (s[n] == 123 || s[n] == 125)
				s[i] = s[i] - 32;
		}
	}

	return (s);
}
