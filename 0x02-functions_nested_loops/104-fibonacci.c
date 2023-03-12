#include <stdio.h>

/**
 * main -> prints first 98 fibonacci numbers
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int a = 1, b = 2, tmp;
	int count = 1;

	while (count <= 98)
	{
		if (count != 1)
			printf(", ");
		printf("%lu", a);
		tmp = a;
		a = b;
		b = a + tmp;
		count++;
	}
	return (0);
}
