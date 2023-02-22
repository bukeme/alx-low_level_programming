#include "main.h"

/**
 * main -> calls printDesc function
 *
 * Return: 0 on success
 */
int main(void)
{
	char msg[] = "_putchar";

    while (int i = 0; i < 8; i++)
    {
        _putchar(msg[i]);
        i++;
    }
    _putchar('\n');
    return (0);
}
