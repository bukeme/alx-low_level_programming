/*
 *File: 101-quote.c
 *Auth: Ukeme
 */

#include <unistd.h>

/*
 *Main function
 *
 *Print description using write
 *
 *return 1
 */

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, 59);
	return (1);
}
