#include <stdio.h>
/**
 * main - the main function of the program
 *
 * Return: return 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'q' && alphabets != 'e')
		{
			putchar(alphabets);
		}
	}

	putchar('\n');
	return (0);
}
