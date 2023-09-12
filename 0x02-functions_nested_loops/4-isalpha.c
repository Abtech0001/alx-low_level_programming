#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int alpha)
{
	return ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'));
}
