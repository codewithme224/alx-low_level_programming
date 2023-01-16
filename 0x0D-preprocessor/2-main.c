#include <stdio.h>

/**
 * main - print the name of the file program it was compiled from
 * Return: return 0
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
