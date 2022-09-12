#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || (i == 56 && j != 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
