#include <stdio.h>

/**
 * main -> prints the sum of even fibonacci numbers
 * less than or equal to 4000000
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int a = 1, b = 2, sum = 0;
	unsigned long int tmp;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum = sum + a;
		tmp = a;
		a = b;
		b = a + tmp;
	}
	printf("%lu\n", sum);
	return (0);
}
