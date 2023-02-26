#include "main.h"

/**
 * power -> returns the power
 * of a to b
 * @a: base number
 * @b: expontential number
 * Return: result
 */

int power(int a, int b)
{
	int i;
	int base = 1;

	for (i = 0; i < b; i++)
	{
		base *= a;
	}
	return (base);
}

/**
 * print_number -> prints a number
 * @n: the number
 */

void print_number(int n)
{
	int num = n;
	int exp = 0;

	while (num / 10 != 0)
	{
		num /= 10;
		exp++;
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (exp >= 0)
	{
		_putchar(((n / power(10, exp)) % 10) + '0');
		exp--;
	}
}

