#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printing hexadecimal
 *
 * Return: Always 0
 */
int main(void)
{
	/* Declaring Variables */
	int hex;

	for (hex = 0; hex < 10; hex++)
	{
		putchar('0' + hex);
	}
	for (hex = 0; hex < 6; hex++)
	{
		putchar('a' + hex);
	}

	putchar('\n');

	return (0);
}
