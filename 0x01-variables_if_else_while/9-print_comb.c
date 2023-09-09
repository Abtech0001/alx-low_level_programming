#include <stdio.h>
/**
 * main - entry point
 *
 * Descripition: possible combinations
 *
 * Return: Always 0
 */
int main(void)
{
	/* Variable declaraction */
	int comb;

	for (comb = 0; comb < 10; comb++)
	{
		putchar('0' + comb);
		if (comb < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
