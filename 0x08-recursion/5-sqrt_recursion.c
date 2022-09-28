#include "main.h"

/**
 * check_sqrt - checks for the square root of i
 * @x: sqrt
 * @i: integer
 *
 * Return: -1 or sqrt of i
 */

int check_sqrt(int x, int i)
{
	if (x * x == i)
		return (x);
	if (x * x > i)
		return (-1);
	return (check_sqrt(x + 1, i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_sqrt(1, n));
}
