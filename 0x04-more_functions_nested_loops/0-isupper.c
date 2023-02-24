#include "main.h"

/**
 * _isupper -> checks if letter is uppercase
 * @c: letter number
 * Return: 1 if true else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
