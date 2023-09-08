#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase,
 *              followed by the alphabet in uppercase, and a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	/* Print lowercase alphabet */
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	/* Print uppercase alphabet' */
	lowercase = 'a';

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');  /* Print a new line */
	return (0);
}

