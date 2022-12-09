#include <stdio.h>
/**
 * main - The main function of the program
 *
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
