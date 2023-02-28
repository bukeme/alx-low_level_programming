#include "main.h"

/**
 * puts_half -> prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i, start, len;

	len = strlen(str);
	start = len % 2 == 0 ? len / 2 : ((len - 1) / 2) + 1;
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

