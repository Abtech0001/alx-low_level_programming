#include "main.h"
#include "unistd.h"
/**
 * _putchar - writes the characte to stdout
 *
 * Return: on sucess 1
 * on error, -1 returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
