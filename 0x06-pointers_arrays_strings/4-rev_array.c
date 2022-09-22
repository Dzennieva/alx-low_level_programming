#include "main.h"

/**
 *reverse_array- everses the content of an array of integers
 *@a: array of integers
 *@n: number of elements
 *
 *Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j, rev;

	i = 0;

	j = n - 1;

	while (i < j)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
		i++;
		j--;
	}
}
