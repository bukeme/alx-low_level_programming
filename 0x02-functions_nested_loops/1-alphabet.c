#include "main.h"

/**
 * print_alphabet -> calls print_alphabet
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
