#include "main.h"

/**
 * reverse_array - function that reverses the content of an arraya
 *
 * @a: pointer to the int array
 * @n: number of elements of the array
 *
 * Return: return 0
 */
void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
