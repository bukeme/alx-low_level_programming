#include "main.h"

/**
 * print_num -> print number
 * using _putchar
 * @num: number
 */

void print_num(int num)
{
	if (num / 10 != 0)
		print_num(num / 10);
	if (num < 0 && num / 10 == 0)
		_putchar('-');
	_putchar(((num < 0 ? num * -1 : num) % 10) + '0');
}

/**
 * print_to_98 -> print numbers to 98
 * @n: start number
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		print_num(n);
		_putchar(',');
		_putchar(' ');
		n > 98 ? n-- : n++;
	}
	print_num(98);
	_putchar('\n');
}

