#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lower_alpha = 'z';

	while (lower_alpha >= 'a')
	{
		putchar(lower_alpha);
		lower_alpha--;
	}
	putchar('\n');
	return (0);
}
