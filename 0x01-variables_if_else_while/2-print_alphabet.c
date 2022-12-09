#include <stdio.h>
#include <ctype.h>

/**
 * main - The main function that prints alphabet letter
 *
 * Return: return 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		c = tolower(c);
		putchar(c);
	}
	putchar('\n');
	return (0);
}
