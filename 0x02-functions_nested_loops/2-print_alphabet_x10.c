#include "main.c"

/**
 * print_alphabet_x10 -> prints alphabets
 * 10 times
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar('\n');
			letter++;
		}
		i++;
	}
	_putchar('\n');
}
