#include "main.h"

/**
 * _puts -> prints a string
 *@str: the string
 */

void _puts(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

