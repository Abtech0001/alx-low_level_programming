#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Printing decimal number.
 *
 *Return: always 0
 */
int main(void)
{
	/* Declaring a variable */
	int num = 0;

	while (num <= 9)
	{
		printf("%d\n", num);
		num++;
	}
	return (0);
}
