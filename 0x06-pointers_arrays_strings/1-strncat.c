#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: char
 * @src: char
 * @n: number of bytes from src
 *
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';
	return (dest);
}
