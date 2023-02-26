#include "main.h"

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
		_putchar(((int) (n / pow(10, exp)) % 10) + '0');
		exp--;
	}
	_putchar('\n');
}

