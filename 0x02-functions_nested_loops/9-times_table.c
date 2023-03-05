#include "main.h"

/**
 * times_table -> prints 0 to 9
 * times table
 */

void times_table(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			num = i * j;
			if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (num < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

