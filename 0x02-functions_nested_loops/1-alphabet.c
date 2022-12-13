#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);

	_putchar('\n');
}
