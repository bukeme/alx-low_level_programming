#include <stdio.h>

/**
 * main -> prints the largest prime factor
 * of 612852475143
 * Return: 0 on success
 */

int main(void)
{
	long int num = 612852475143;
	int i = 2;

	while (num != 1)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", i);
	return (0);
}
