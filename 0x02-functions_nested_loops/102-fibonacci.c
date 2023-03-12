#include <stdio.h>

/**
 * main -> prints first 50 fibonacci numbers
 * Return: 0 on success
 */

int main(void)
{
	long long int a = 1, b = 2, count = 1;
	long long int tmp;

	while (count <= 50)
	{
		printf("%lld", a);
		tmp = a;
		a = b;
		b = a + tmp;
		count++;
		if (count < 50)
			printf(", ");
	}
	return (0);
}
