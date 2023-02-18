#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit = 0;
	char lower_alpha = 'a';
	while(digit < 10)
	{
		putchar(digit +'0');
		digit++;
	}
	while(lower_alpha <= 'f')
	{
		putchar(lower_alpha);
		lower_alpha++;
	}
	putchar('\n');
	return (0);
}
