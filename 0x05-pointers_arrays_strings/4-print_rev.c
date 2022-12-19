#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string parameter
 *
 * Return: return 0
 */
void print_rev(char *s)
{
	int characters;

	for (characters = 0; s[characters] != '\0'; ++characters)
		;

	for (--characters; characters >= 0; --characters)
		_putchar(s[characters]);
	_putchar('\n');
}
