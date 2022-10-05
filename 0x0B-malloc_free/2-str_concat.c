#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string, NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	int l, m, n, i;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = 0;
	while (*(s1 + l) != '\0')
	{
		l++;
	}

	m = 0;
	while (*(s2 + m) != '\0')
	{
		m++;
	}

	n = l + m;
	arr = (char *) malloc(n * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		arr[i] = s1[i];
	for (i = 0; i < m; i++)
		arr[i + l] = s2[i];
	return (arr);
}
