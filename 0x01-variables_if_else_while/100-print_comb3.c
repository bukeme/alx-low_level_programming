#include <stdio.h>

/**
 * main -> prints the possible combination
 * of two digits
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
