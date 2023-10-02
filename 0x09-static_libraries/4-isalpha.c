#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @alpha: assigning value to be check
 * Return: 1 if alpha is a letter, 0 otherwise
 */
int _isalpha(int alpha)
{
	return ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'));
}
