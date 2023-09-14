#include <stdio.h>

/**
* main - causes an infinite loop
* This function initializes an integer variable 'i' and attempts to print
* an infinite loop of integers from 'i' to 10 using
* printf, However, 'i' is never incremented, causing an actual
* infinite loop. The loop is fixed by incrementing 'i' in each iteration.
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n")
	i = 0;

	while (i < 10)
	{
		putchar(i);
	}
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
