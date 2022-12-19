#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: string parameter
 *
 * Return: return 0
 */
void rev_string(char *s)
{
	int x, i;
	char ch;

	for (x = 0; s[x] != '\0'; ++x)
		;

	for (i = 0; i < x / 2; ++i)
	{
		ch = s[i];
		s[i] = s[x - 1 - i];
		s[x - 1 - i] = ch;
	}
}
