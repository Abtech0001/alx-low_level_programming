#include "main.h"
/**
 * positive_or_negative - Thi the function that check positive or negative
 *
 * @i: check if i is negative or positive
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is postive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
