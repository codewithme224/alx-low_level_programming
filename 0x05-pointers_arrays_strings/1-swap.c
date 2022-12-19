#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: return 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
