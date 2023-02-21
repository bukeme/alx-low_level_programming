/**
 * printDesc -> prints _putchar
 */
void printDesc() {
	printf("_putchar\n");
}

/**
 * print_alphabet -> prints alphabets
 */
void print_alphabet(void)
{
    char alpha = 'a';

    while (alpha <= 'z')
    {
        _putchar(alpha);
        alpha++;
    }
    putchar('\n');
}