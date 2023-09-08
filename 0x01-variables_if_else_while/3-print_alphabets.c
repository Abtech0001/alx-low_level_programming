#include <stdio.h>
/* main - Entry point */
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

