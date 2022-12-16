#include "main.h"

/**
 * print_number - prints integers
 * @n: the integer
 */
void print_number(int n)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar ('\n');
}
