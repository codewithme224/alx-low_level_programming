#include "main.h"

/**
 * _isdigit - entry point of the function that checks for digits
 *
 * @c: digits to be checked
 *
 * Return: returns 1 if c is a digit, otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
