#include "main.h"

/**
 * print_number -> prints the integers with putchar
 * @n: the integer
 */

void print_number(int n)
{
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_array -> prints integers in array
 * @a: array
 * @n: number of items
 */

void print_array(int *a, int n)
{
	int i, num;

	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
			_putchar('-');

		num = a[i] < 0 ? a[i] * -1 : a[i];
		print_number(num);

		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

