#include "main.h"

/**
 * print_numbers - entry point of the function
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
		if (i == 9)
		{
			_putchar('\n');
		}
	}
}
