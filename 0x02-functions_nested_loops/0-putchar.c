#include "main.h"

/**
 * main -> calls printDesc function
 *
 * Return: 0 on success
 */
int main(void)
{
	char msg[] = "_putchar";
	int i;

	while (i < 8)
	{
        	putchar(msg[i]);
        	i++;
    	}
	_putchar('\n');
	return (0);
}
