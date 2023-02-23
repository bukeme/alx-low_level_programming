#include "main.h"

/**
 * _islower -> checks if letter is lower
 * @c: letter
 * Return: 1 if true else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

