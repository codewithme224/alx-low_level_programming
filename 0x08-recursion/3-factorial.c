#include "main.h"

/**
 * factorial - function returns the factorial of a given number
 * @n: the given number
 *
 * Return: return the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
