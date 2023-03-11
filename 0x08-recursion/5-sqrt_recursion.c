#include "main.h"

/**
 * _sqrt -> calculates square root
 * of number
 * @num: number
 * @sub: number to subtract from num
 * @count: number of times the function ran
 * Return: the square root of num
 */

int _sqrt(int num, int sub, int count)
{
	int number = num - sub;

	count++;
	sub = sub + 2;
	if (number == 0)
	{
		return (count);
	}
	else if (number < 0)
	{
		return (-1);
	}
	else if (number > 0)
	{
		return (_sqrt(number, sub, count));
	}
	else
	{
		return (0);
	}
}

/**
 * _sqrt_recursion -> returns square root of n
 * @n: number
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(n, 1, 0));
}

