#include "main.h"

/**
 * puts2 -> prints strings characters
 * skipping one
 * @str: string
 */

void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

