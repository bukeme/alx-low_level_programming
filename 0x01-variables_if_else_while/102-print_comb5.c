#include <stdio.h>

/**
 * main -> prints the possible combinatiion
 * of two two digit
 *
 * Return: 0 on success
 */
int main(void)
{
	int p = 0;

	while (p < 10)
	{
		int q = 0;

		while (q < 10)
		{
			int r = 0;

			while (r < 10)
			{
				int s = 0;

				while (s < 10)
				{
					if ((r * 10) + s > (p * 10) + q)
					{
						putchar(p + '0');
						putchar(q + '0');
						putchar(' ');
						putchar(r + '0');
						putchar(s + '0');
						if (p != 9 || q != 8 || r != 9 || s != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
					s++;
				}
				r++;
			}
			q++;
		}
		p++;
	}
	putchar('\n');
	return (0);
}
