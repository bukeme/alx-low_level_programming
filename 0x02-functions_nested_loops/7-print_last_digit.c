#include "main.h"

/**
 * print_last_digit -> returns
 * last digit
 * @n: number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;
	_putchar(last);
	return (last);
}

