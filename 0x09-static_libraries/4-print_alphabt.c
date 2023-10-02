#include <stdio.h>
/**
 * main - entry point
 *
 * Descripion: This program prints the alphabet lowercase except q,
 * Return: always 0
 */
int main(void)
{
	/* Declaring my variable */
	char letter = 'a';

	while (letter <= 'z')	/* Condition Statement */
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
