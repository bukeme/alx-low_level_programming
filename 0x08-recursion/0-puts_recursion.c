#include "main.h"

int i = 0;

void _puts_recursion(char *s)
{
	_putchar(s[i]);
	i++;
	if (s[i] != '\0')
		_puts_recursion(s);
}

