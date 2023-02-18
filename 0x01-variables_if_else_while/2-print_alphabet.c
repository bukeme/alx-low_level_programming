#include <stdio.h>

int main(void)
{
	char start_alpha = 'a';
	while (start_alpha <= 'z')
	{
		putchar(start_alpha);
		start_alpha++;
	}
	putchar('\n');
	return (0);
}
