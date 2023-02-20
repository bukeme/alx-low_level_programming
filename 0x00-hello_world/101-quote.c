/*
 *File: 101-quote.c
 *Auth: Ukeme
 */

#include <unistd.h>

/**
 *main -> prints a sentence
 *
 *Return: 0 on success
 */

int main(void)
{
	char *message = "and that piece of art is useful"
			"\" - Dora Korpar, 2015-10-19\n";

	write(2, message, 59);
	return (1);
}
