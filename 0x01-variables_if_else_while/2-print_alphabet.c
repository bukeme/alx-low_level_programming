#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char start_alpha = 'a';
	while (start_alpha <= 'z')
	{
		putchar(start_alpha);
		start_alpha++;
	}
	putchar('\n');
	return (0);
}
