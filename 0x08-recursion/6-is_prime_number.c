#include "main.h"

int is_prime(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div < num / 2)
		is_prime(num, div++);
	if (div >= num)
		return (1);
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return is_prime(n, 2);
}
