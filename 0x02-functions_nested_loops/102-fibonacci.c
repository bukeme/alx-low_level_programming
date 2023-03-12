#include <stdio.h>

/**
 * main -> prints first 50 fibonacci numbers
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int a = 1, b = 2, count = 1;
	unsigned long int tmp;

	while (count <= 50)
	{
		if (count != 1)
			printf(", ");
		printf("%lu", a);
		tmp = a;
		a = b;
		b = a + tmp;
		count++;
	}
	printf("\n");
	return (0);
}
