#include "main.h"

/**
 * puts_half -> prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i, start, length;

	length = strlen(str);
	start = length % 2 == 0 ? length / 2 : length - 1 / 2;
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

