#include "main.h"

/**
 * _put_recursion -> prints string
 * @s: string
 * @i: index
 */

void _put_recursion(char *s, int i)
{
	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_put_recursion(s, i);
	}
}

/**
 * _puts_recursion -> calls _put_recursion
 * @s: string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_put_recursion(s, i);
}
