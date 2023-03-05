#include <stdio.h>

/**
 * main -> prints multiples of 
 * 3 and 5 that are less than 1024
 * Return: 0 on success
 */

int main(void)
{
	int num = 1024;
	int i;
	long int _sum = 0;
	
	for (i = 3; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			_sum += i;
	}
	printf("%li\n", _sum);
	return (0);
}
