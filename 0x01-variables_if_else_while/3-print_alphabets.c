#include <stdio.h>
#include <ctype.h>
/**
 * main - The main function of the program
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
		if (c == 'z')
		{
			c = 'A';
			for (; c <= 'Z'; c++)
			{
				putchar(c);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
