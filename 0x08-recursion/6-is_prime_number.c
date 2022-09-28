#include "main.h"

/**
 * check_prime - returns 1 if the input integer is a prime number
 * @x: factor
 * @p: prime number
 *
 * Return: 1 if prime, 0 if not
 */

int check_prime(int x, int p)
{
	if (p < 2 || p % x == 0)
		return (0);
	else if (x > p / 2)
		return (1);
	return (check_prime(x + 1, p));
}

/**
* is_prime_number - states if number is prime
* @n: number to check
*
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
