#include "main.h"

/**
 * print_num -> prints number
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
 * print_times_table -> print times table
 * from 0 to n
 * @n: n
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, num;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				num = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (num < 100)
						_putchar(' ');
					if (num < 10)
						_putchar(' ');
				}
				print_num(num);
			}
			_putchar('\n');
		}
	}
}

