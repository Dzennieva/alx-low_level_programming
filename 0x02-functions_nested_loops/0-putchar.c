#include "main.h"


/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
