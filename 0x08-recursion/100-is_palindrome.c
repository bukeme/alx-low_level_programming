#include "main.h"

/**
 * _strlen -> calculates length of _str
 * @_str: string
 * @count: length
 * Return: length of string
 */

int _strlen(char *_str, int count)
{
	if (_str[count] != '\0')
	{
		count++;
		return (_strlen(_str, count));
	}
	else
	{
		return (count);
	}
}

/**
 * check_palindrome -> checks if string is palindrome
 * @s: string
 * @i: first index
 * @j: second index
 * Return: 1 if string is palindrome else 0
 */

int check_palindrome(char *s, int i, int j)
{
	if (s[i] != s[j])
	{
		return (0);
	}
	else if (i < j)
	{
		i++;
		j--;
		return (check_palindrome(s, i, j));
	}
	else
	{
		return (1);
	}
}

/**
 * is_palindrome -> calls check_palindrome function
 * @s: string
 * Return: value from check_palindrome
 */

int is_palindrome(char *s)
{
	int s_len = _strlen(s, 0);

	return (check_palindrome(s, 0, s_len - 1));
}
