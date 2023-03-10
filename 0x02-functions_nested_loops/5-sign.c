#include "main.h"

/**
 * print_sign -> prints the sign
 * of a number
 * @n: integer
 * Return: 1 if n is positive
 * -1 if n is negative
 * 0 if n is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar(0 + '0');
	return (0);
}

