#include "main.h"

/**
 * _isalpha -> checks for alphabets
 * @c: integer
 * Return: 1 if true else 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

