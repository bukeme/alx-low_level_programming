#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
