#include <stdio.h>

int main(void)
{
	char lower_alpha = 'a';
	while (lower_alpha <= 'z')
	{
		if (lower_alpha != 'e' && lower_alpha != 'q')
		{
			putchar(lower_alpha);
		}
		lower_alpha++;
	}
	putchar('\n');
	return (0);
}
