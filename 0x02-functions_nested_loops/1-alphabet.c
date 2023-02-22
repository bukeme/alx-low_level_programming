#include "main.h"

/**
 * main -> calls print_alphabet
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
