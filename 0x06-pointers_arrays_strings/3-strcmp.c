#include "main.h"

/**
 *_strcmp- copies the string pointed to by src,
 *
 *@s1: first str
 *@s2: second str
 *Return: int
 */

int _strcmp(char *s1, char  *s2)
{
	int i, result;

	i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s2 + i) && *(s1 + i) != '\0')
		i++;
	result = (*(s1 + i) - *(s2 + i));
	return (result);
}
