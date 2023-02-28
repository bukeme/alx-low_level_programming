#include "main.h"

/**
 * rev_string -> reverse a string
 * @s: string
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	char str[1000];
	char temp[2];

	strcpy(str, s);
	strcpy(s, "");
	for (i = length - 1; i >= 0; i--)
	{
		temp[0] = str[i];
		temp[1] = '\0';
		strcat(s, temp);
	}
}

