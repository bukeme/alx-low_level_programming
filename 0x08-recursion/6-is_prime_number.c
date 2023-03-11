#include "main.h"

/**
 * is_prime -> checks if num is prime
 * @num: number
 * @div: divisor
 * Return: returns 1 if num is prime
 */

int is_prime(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	else if (div < num / 2)
	{
		div++;
		return (is_prime(num, div));
	}
	if (div >= num / 2)
		return (1);
	return (0);
}

/**
 * is_prime_number -> returns 1 if n is prime
 * else return 0
 * @n: number
 * Return: 1 if n is prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (is_prime(n, 2));
	}
}
